﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glacier/GlacierServiceClientModel.h>

namespace Aws
{
namespace Glacier
{
  /**
   * <p> Amazon S3 Glacier (Glacier) is a storage solution for "cold data."</p>
   * <p>Glacier is an extremely low-cost storage service that provides secure,
   * durable, and easy-to-use storage for data backup and archival. With Glacier,
   * customers can store their data cost effectively for months, years, or decades.
   * Glacier also enables customers to offload the administrative burdens of
   * operating and scaling storage to AWS, so they don't have to worry about capacity
   * planning, hardware provisioning, data replication, hardware failure and
   * recovery, or time-consuming hardware migrations.</p> <p>Glacier is a great
   * storage choice when low storage cost is paramount and your data is rarely
   * retrieved. If your application requires fast or frequent access to your data,
   * consider using Amazon S3. For more information, see <a
   * href="http://aws.amazon.com/s3/">Amazon Simple Storage Service (Amazon
   * S3)</a>.</p> <p>You can store any kind of data in any format. There is no
   * maximum limit on the total amount of data you can store in Glacier.</p> <p>If
   * you are a first-time user of Glacier, we recommend that you begin by reading the
   * following sections in the <i>Amazon S3 Glacier Developer Guide</i>:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What
   * is Amazon S3 Glacier</a> - This section of the Developer Guide describes the
   * underlying data model, the operations it supports, and the AWS SDKs that you can
   * use to interact with the service.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting
   * Started with Amazon S3 Glacier</a> - The Getting Started section walks you
   * through the process of creating a vault, uploading archives, creating jobs to
   * download archives, retrieving the job output, and deleting archives.</p> </li>
   * </ul>
   */
  class AWS_GLACIER_API GlacierClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GlacierClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlacierClient(const Aws::Glacier::GlacierClientConfiguration& clientConfiguration = Aws::Glacier::GlacierClientConfiguration(),
                      std::shared_ptr<GlacierEndpointProviderBase> endpointProvider = Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlacierClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<GlacierEndpointProviderBase> endpointProvider = Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Glacier::GlacierClientConfiguration& clientConfiguration = Aws::Glacier::GlacierClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlacierClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<GlacierEndpointProviderBase> endpointProvider = Aws::MakeShared<GlacierEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Glacier::GlacierClientConfiguration& clientConfiguration = Aws::Glacier::GlacierClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlacierClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlacierClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlacierClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GlacierClient();

        /**
         * <p>This operation aborts a multipart upload identified by the upload ID.</p>
         * <p>After the Abort Multipart Upload request succeeds, you cannot upload any more
         * parts to the multipart upload or complete the multipart upload. Aborting a
         * completed upload fails. However, aborting an already-aborted upload will
         * succeed, for a short time. For more information about uploading a part and
         * completing a multipart upload, see <a>UploadMultipartPart</a> and
         * <a>CompleteMultipartUpload</a>.</p> <p>This operation is idempotent.</p> <p>An
         * AWS account has full permission to perform all operations (actions). However,
         * AWS Identity and Access Management (IAM) users don't have any permissions by
         * default. You must grant them explicit permission to perform specific actions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working
         * with Archives in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-abort-upload.html">Abort
         * Multipart Upload</a> in the <i>Amazon Glacier Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/AbortMultipartUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortMultipartUploadOutcome AbortMultipartUpload(const Model::AbortMultipartUploadRequest& request) const;

        /**
         * A Callable wrapper for AbortMultipartUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AbortMultipartUploadRequestT = Model::AbortMultipartUploadRequest>
        Model::AbortMultipartUploadOutcomeCallable AbortMultipartUploadCallable(const AbortMultipartUploadRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::AbortMultipartUpload, request);
        }

        /**
         * An Async wrapper for AbortMultipartUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AbortMultipartUploadRequestT = Model::AbortMultipartUploadRequest>
        void AbortMultipartUploadAsync(const AbortMultipartUploadRequestT& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::AbortMultipartUpload, request, handler, context);
        }

        /**
         * <p>This operation aborts the vault locking process if the vault lock is not in
         * the <code>Locked</code> state. If the vault lock is in the <code>Locked</code>
         * state when this operation is requested, the operation returns an
         * <code>AccessDeniedException</code> error. Aborting the vault locking process
         * removes the vault lock policy from the specified vault. </p> <p>A vault lock is
         * put into the <code>InProgress</code> state by calling <a>InitiateVaultLock</a>.
         * A vault lock is put into the <code>Locked</code> state by calling
         * <a>CompleteVaultLock</a>. You can get the state of a vault lock by calling
         * <a>GetVaultLock</a>. For more information about the vault locking process, see
         * <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon
         * Glacier Vault Lock</a>. For more information about vault lock policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock-policy.html">Amazon
         * Glacier Access Control with Vault Lock Policies</a>. </p> <p>This operation is
         * idempotent. You can successfully invoke this operation multiple times, if the
         * vault lock is in the <code>InProgress</code> state or if there is no policy
         * associated with the vault.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/AbortVaultLock">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortVaultLockOutcome AbortVaultLock(const Model::AbortVaultLockRequest& request) const;

        /**
         * A Callable wrapper for AbortVaultLock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AbortVaultLockRequestT = Model::AbortVaultLockRequest>
        Model::AbortVaultLockOutcomeCallable AbortVaultLockCallable(const AbortVaultLockRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::AbortVaultLock, request);
        }

        /**
         * An Async wrapper for AbortVaultLock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AbortVaultLockRequestT = Model::AbortVaultLockRequest>
        void AbortVaultLockAsync(const AbortVaultLockRequestT& request, const AbortVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::AbortVaultLock, request, handler, context);
        }

        /**
         * <p>This operation adds the specified tags to a vault. Each tag is composed of a
         * key and a value. Each vault can have up to 10 tags. If your request would cause
         * the tag limit for the vault to be exceeded, the operation throws the
         * <code>LimitExceededException</code> error. If a tag already exists on the vault
         * under a specified key, the existing key value will be overwritten. For more
         * information about tags, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/tagging.html">Tagging
         * Amazon S3 Glacier Resources</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/AddTagsToVault">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToVaultOutcome AddTagsToVault(const Model::AddTagsToVaultRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToVaultRequestT = Model::AddTagsToVaultRequest>
        Model::AddTagsToVaultOutcomeCallable AddTagsToVaultCallable(const AddTagsToVaultRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::AddTagsToVault, request);
        }

        /**
         * An Async wrapper for AddTagsToVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToVaultRequestT = Model::AddTagsToVaultRequest>
        void AddTagsToVaultAsync(const AddTagsToVaultRequestT& request, const AddTagsToVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::AddTagsToVault, request, handler, context);
        }

        /**
         * <p>You call this operation to inform Amazon S3 Glacier (Glacier) that all the
         * archive parts have been uploaded and that Glacier can now assemble the archive
         * from the uploaded parts. After assembling and saving the archive to the vault,
         * Glacier returns the URI path of the newly created archive resource. Using the
         * URI path, you can then access the archive. After you upload an archive, you
         * should save the archive ID returned to retrieve the archive at a later point.
         * You can also get the vault inventory to obtain a list of archive IDs in a vault.
         * For more information, see <a>InitiateJob</a>.</p> <p>In the request, you must
         * include the computed SHA256 tree hash of the entire archive you have uploaded.
         * For information about computing a SHA256 tree hash, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html">Computing
         * Checksums</a>. On the server side, Glacier also constructs the SHA256 tree hash
         * of the assembled archive. If the values match, Glacier saves the archive to the
         * vault; otherwise, it returns an error, and the operation fails. The
         * <a>ListParts</a> operation returns a list of parts uploaded for a specific
         * multipart upload. It includes checksum information for each uploaded part that
         * can be used to debug a bad checksum issue.</p> <p>Additionally, Glacier also
         * checks for any missing content ranges when assembling the archive, if missing
         * content ranges are found, Glacier returns an error and the operation fails.</p>
         * <p>Complete Multipart Upload is an idempotent operation. After your first
         * successful complete multipart upload, if you call the operation again within a
         * short period, the operation will succeed and return the same archive ID. This is
         * useful in the event you experience a network issue that causes an aborted
         * connection or receive a 500 server error, in which case you can repeat your
         * Complete Multipart Upload request and get the same archive ID without creating
         * duplicate archives. Note, however, that after the multipart upload completes,
         * you cannot call the List Parts operation and the multipart upload will not
         * appear in List Multipart Uploads response, even if idempotent complete is
         * possible.</p> <p>An AWS account has full permission to perform all operations
         * (actions). However, AWS Identity and Access Management (IAM) users don't have
         * any permissions by default. You must grant them explicit permission to perform
         * specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-archive-mpu.html">Uploading
         * Large Archives in Parts (Multipart Upload)</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-complete-upload.html">Complete
         * Multipart Upload</a> in the <i>Amazon Glacier Developer Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CompleteMultipartUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteMultipartUploadOutcome CompleteMultipartUpload(const Model::CompleteMultipartUploadRequest& request) const;

        /**
         * A Callable wrapper for CompleteMultipartUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteMultipartUploadRequestT = Model::CompleteMultipartUploadRequest>
        Model::CompleteMultipartUploadOutcomeCallable CompleteMultipartUploadCallable(const CompleteMultipartUploadRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::CompleteMultipartUpload, request);
        }

        /**
         * An Async wrapper for CompleteMultipartUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteMultipartUploadRequestT = Model::CompleteMultipartUploadRequest>
        void CompleteMultipartUploadAsync(const CompleteMultipartUploadRequestT& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::CompleteMultipartUpload, request, handler, context);
        }

        /**
         * <p>This operation completes the vault locking process by transitioning the vault
         * lock from the <code>InProgress</code> state to the <code>Locked</code> state,
         * which causes the vault lock policy to become unchangeable. A vault lock is put
         * into the <code>InProgress</code> state by calling <a>InitiateVaultLock</a>. You
         * can obtain the state of the vault lock by calling <a>GetVaultLock</a>. For more
         * information about the vault locking process, <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon
         * Glacier Vault Lock</a>. </p> <p>This operation is idempotent. This request is
         * always successful if the vault lock is in the <code>Locked</code> state and the
         * provided lock ID matches the lock ID originally used to lock the vault.</p>
         * <p>If an invalid lock ID is passed in the request when the vault lock is in the
         * <code>Locked</code> state, the operation returns an
         * <code>AccessDeniedException</code> error. If an invalid lock ID is passed in the
         * request when the vault lock is in the <code>InProgress</code> state, the
         * operation throws an <code>InvalidParameter</code> error.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CompleteVaultLock">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteVaultLockOutcome CompleteVaultLock(const Model::CompleteVaultLockRequest& request) const;

        /**
         * A Callable wrapper for CompleteVaultLock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteVaultLockRequestT = Model::CompleteVaultLockRequest>
        Model::CompleteVaultLockOutcomeCallable CompleteVaultLockCallable(const CompleteVaultLockRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::CompleteVaultLock, request);
        }

        /**
         * An Async wrapper for CompleteVaultLock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteVaultLockRequestT = Model::CompleteVaultLockRequest>
        void CompleteVaultLockAsync(const CompleteVaultLockRequestT& request, const CompleteVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::CompleteVaultLock, request, handler, context);
        }

        /**
         * <p>This operation creates a new vault with the specified name. The name of the
         * vault must be unique within a region for an AWS account. You can create up to
         * 1,000 vaults per account. If you need to create more vaults, contact Amazon S3
         * Glacier.</p> <p>You must use the following guidelines when naming a vault.</p>
         * <ul> <li> <p>Names can be between 1 and 255 characters long.</p> </li> <li>
         * <p>Allowed characters are a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), and '.'
         * (period).</p> </li> </ul> <p>This operation is idempotent.</p> <p>An AWS account
         * has full permission to perform all operations (actions). However, AWS Identity
         * and Access Management (IAM) users don't have any permissions by default. You
         * must grant them explicit permission to perform specific actions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/creating-vaults.html">Creating
         * a Vault in Amazon Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-put.html">Create
         * Vault </a> in the <i>Amazon Glacier Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CreateVault">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVaultOutcome CreateVault(const Model::CreateVaultRequest& request) const;

        /**
         * A Callable wrapper for CreateVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVaultRequestT = Model::CreateVaultRequest>
        Model::CreateVaultOutcomeCallable CreateVaultCallable(const CreateVaultRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::CreateVault, request);
        }

        /**
         * An Async wrapper for CreateVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVaultRequestT = Model::CreateVaultRequest>
        void CreateVaultAsync(const CreateVaultRequestT& request, const CreateVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::CreateVault, request, handler, context);
        }

        /**
         * <p>This operation deletes an archive from a vault. Subsequent requests to
         * initiate a retrieval of this archive will fail. Archive retrievals that are in
         * progress for this archive ID may or may not succeed according to the following
         * scenarios:</p> <ul> <li> <p>If the archive retrieval job is actively preparing
         * the data for download when Amazon S3 Glacier receives the delete archive
         * request, the archival retrieval operation might fail.</p> </li> <li> <p>If the
         * archive retrieval job has successfully prepared the archive for download when
         * Amazon S3 Glacier receives the delete archive request, you will be able to
         * download the output.</p> </li> </ul> <p>This operation is idempotent. Attempting
         * to delete an already-deleted archive does not result in an error.</p> <p>An AWS
         * account has full permission to perform all operations (actions). However, AWS
         * Identity and Access Management (IAM) users don't have any permissions by
         * default. You must grant them explicit permission to perform specific actions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/deleting-an-archive.html">Deleting
         * an Archive in Amazon Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-delete.html">Delete
         * Archive</a> in the <i>Amazon Glacier Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DeleteArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveOutcome DeleteArchive(const Model::DeleteArchiveRequest& request) const;

        /**
         * A Callable wrapper for DeleteArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteArchiveRequestT = Model::DeleteArchiveRequest>
        Model::DeleteArchiveOutcomeCallable DeleteArchiveCallable(const DeleteArchiveRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::DeleteArchive, request);
        }

        /**
         * An Async wrapper for DeleteArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteArchiveRequestT = Model::DeleteArchiveRequest>
        void DeleteArchiveAsync(const DeleteArchiveRequestT& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::DeleteArchive, request, handler, context);
        }

        /**
         * <p>This operation deletes a vault. Amazon S3 Glacier will delete a vault only if
         * there are no archives in the vault as of the last inventory and there have been
         * no writes to the vault since the last inventory. If either of these conditions
         * is not satisfied, the vault deletion fails (that is, the vault is not removed)
         * and Amazon S3 Glacier returns an error. You can use <a>DescribeVault</a> to
         * return the number of archives in a vault, and you can use <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-initiate-job-post.html">Initiate
         * a Job (POST jobs)</a> to initiate a new inventory retrieval for a vault. The
         * inventory contains the archive IDs you use to delete archives using <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-delete.html">Delete
         * Archive (DELETE archive)</a>.</p> <p>This operation is idempotent.</p> <p>An AWS
         * account has full permission to perform all operations (actions). However, AWS
         * Identity and Access Management (IAM) users don't have any permissions by
         * default. You must grant them explicit permission to perform specific actions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/deleting-vaults.html">Deleting
         * a Vault in Amazon Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-delete.html">Delete
         * Vault </a> in the <i>Amazon S3 Glacier Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DeleteVault">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVaultOutcome DeleteVault(const Model::DeleteVaultRequest& request) const;

        /**
         * A Callable wrapper for DeleteVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVaultRequestT = Model::DeleteVaultRequest>
        Model::DeleteVaultOutcomeCallable DeleteVaultCallable(const DeleteVaultRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::DeleteVault, request);
        }

        /**
         * An Async wrapper for DeleteVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVaultRequestT = Model::DeleteVaultRequest>
        void DeleteVaultAsync(const DeleteVaultRequestT& request, const DeleteVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::DeleteVault, request, handler, context);
        }

        /**
         * <p>This operation deletes the access policy associated with the specified vault.
         * The operation is eventually consistent; that is, it might take some time for
         * Amazon S3 Glacier to completely remove the access policy, and you might still
         * see the effect of the policy for a short time after you send the delete
         * request.</p> <p>This operation is idempotent. You can invoke delete multiple
         * times, even if there is no policy associated with the vault. For more
         * information about vault access policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-access-policy.html">Amazon
         * Glacier Access Control with Vault Access Policies</a>. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DeleteVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVaultAccessPolicyOutcome DeleteVaultAccessPolicy(const Model::DeleteVaultAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVaultAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVaultAccessPolicyRequestT = Model::DeleteVaultAccessPolicyRequest>
        Model::DeleteVaultAccessPolicyOutcomeCallable DeleteVaultAccessPolicyCallable(const DeleteVaultAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::DeleteVaultAccessPolicy, request);
        }

        /**
         * An Async wrapper for DeleteVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVaultAccessPolicyRequestT = Model::DeleteVaultAccessPolicyRequest>
        void DeleteVaultAccessPolicyAsync(const DeleteVaultAccessPolicyRequestT& request, const DeleteVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::DeleteVaultAccessPolicy, request, handler, context);
        }

        /**
         * <p>This operation deletes the notification configuration set for a vault. The
         * operation is eventually consistent; that is, it might take some time for Amazon
         * S3 Glacier to completely disable the notifications and you might still receive
         * some notifications for a short time after you send the delete request.</p> <p>An
         * AWS account has full permission to perform all operations (actions). However,
         * AWS Identity and Access Management (IAM) users don't have any permissions by
         * default. You must grant them explicit permission to perform specific actions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring
         * Vault Notifications in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-notifications-delete.html">Delete
         * Vault Notification Configuration </a> in the Amazon S3 Glacier Developer Guide.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DeleteVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVaultNotificationsOutcome DeleteVaultNotifications(const Model::DeleteVaultNotificationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteVaultNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVaultNotificationsRequestT = Model::DeleteVaultNotificationsRequest>
        Model::DeleteVaultNotificationsOutcomeCallable DeleteVaultNotificationsCallable(const DeleteVaultNotificationsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::DeleteVaultNotifications, request);
        }

        /**
         * An Async wrapper for DeleteVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVaultNotificationsRequestT = Model::DeleteVaultNotificationsRequest>
        void DeleteVaultNotificationsAsync(const DeleteVaultNotificationsRequestT& request, const DeleteVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::DeleteVaultNotifications, request, handler, context);
        }

        /**
         * <p>This operation returns information about a job you previously initiated,
         * including the job initiation date, the user who initiated the job, the job
         * status code/message and the Amazon SNS topic to notify after Amazon S3 Glacier
         * (Glacier) completes the job. For more information about initiating a job, see
         * <a>InitiateJob</a>. </p>  <p>This operation enables you to check the
         * status of your job. However, it is strongly recommended that you set up an
         * Amazon SNS topic and specify it in your initiate job request so that Glacier can
         * notify the topic after it completes the job.</p>  <p>A job ID will not
         * expire for at least 24 hours after Glacier completes the job.</p> <p>An AWS
         * account has full permission to perform all operations (actions). However, AWS
         * Identity and Access Management (IAM) users don't have any permissions by
         * default. You must grant them explicit permission to perform specific actions.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For more
         * information about using this operation, see the documentation for the underlying
         * REST API <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-describe-job-get.html">Describe
         * Job</a> in the <i>Amazon Glacier Developer Guide</i>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DescribeJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        Model::DescribeJobOutcomeCallable DescribeJobCallable(const DescribeJobRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::DescribeJob, request);
        }

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        void DescribeJobAsync(const DescribeJobRequestT& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::DescribeJob, request, handler, context);
        }

        /**
         * <p>This operation returns information about a vault, including the vault's
         * Amazon Resource Name (ARN), the date the vault was created, the number of
         * archives it contains, and the total size of all the archives in the vault. The
         * number of archives and their total size are as of the last inventory generation.
         * This means that if you add or remove an archive from a vault, and then
         * immediately use Describe Vault, the change in contents will not be immediately
         * reflected. If you want to retrieve the latest inventory of the vault, use
         * <a>InitiateJob</a>. Amazon S3 Glacier generates vault inventories approximately
         * daily. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-inventory.html">Downloading
         * a Vault Inventory in Amazon S3 Glacier</a>. </p> <p>An AWS account has full
         * permission to perform all operations (actions). However, AWS Identity and Access
         * Management (IAM) users don't have any permissions by default. You must grant
         * them explicit permission to perform specific actions. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/retrieving-vault-info.html">Retrieving
         * Vault Metadata in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-get.html">Describe
         * Vault </a> in the <i>Amazon Glacier Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DescribeVault">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVaultOutcome DescribeVault(const Model::DescribeVaultRequest& request) const;

        /**
         * A Callable wrapper for DescribeVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVaultRequestT = Model::DescribeVaultRequest>
        Model::DescribeVaultOutcomeCallable DescribeVaultCallable(const DescribeVaultRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::DescribeVault, request);
        }

        /**
         * An Async wrapper for DescribeVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVaultRequestT = Model::DescribeVaultRequest>
        void DescribeVaultAsync(const DescribeVaultRequestT& request, const DescribeVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::DescribeVault, request, handler, context);
        }

        /**
         * <p>This operation returns the current data retrieval policy for the account and
         * region specified in the GET request. For more information about data retrieval
         * policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/data-retrieval-policy.html">Amazon
         * Glacier Data Retrieval Policies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetDataRetrievalPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataRetrievalPolicyOutcome GetDataRetrievalPolicy(const Model::GetDataRetrievalPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetDataRetrievalPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataRetrievalPolicyRequestT = Model::GetDataRetrievalPolicyRequest>
        Model::GetDataRetrievalPolicyOutcomeCallable GetDataRetrievalPolicyCallable(const GetDataRetrievalPolicyRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::GetDataRetrievalPolicy, request);
        }

        /**
         * An Async wrapper for GetDataRetrievalPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataRetrievalPolicyRequestT = Model::GetDataRetrievalPolicyRequest>
        void GetDataRetrievalPolicyAsync(const GetDataRetrievalPolicyRequestT& request, const GetDataRetrievalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::GetDataRetrievalPolicy, request, handler, context);
        }

        /**
         * <p>This operation downloads the output of the job you initiated using
         * <a>InitiateJob</a>. Depending on the job type you specified when you initiated
         * the job, the output will be either the content of an archive or a vault
         * inventory.</p> <p>You can download all the job output or download a portion of
         * the output by specifying a byte range. In the case of an archive retrieval job,
         * depending on the byte range you specify, Amazon S3 Glacier (Glacier) returns the
         * checksum for the portion of the data. You can compute the checksum on the client
         * and verify that the values match to ensure the portion you downloaded is the
         * correct data.</p> <p>A job ID will not expire for at least 24 hours after
         * Glacier completes the job. That a byte range. For both archive and inventory
         * retrieval jobs, you should verify the downloaded size against the size returned
         * in the headers from the <b>Get Job Output</b> response.</p> <p>For archive
         * retrieval jobs, you should also verify that the size is what you expected. If
         * you download a portion of the output, the expected size is based on the range of
         * bytes you specified. For example, if you specify a range of
         * <code>bytes=0-1048575</code>, you should verify your download size is 1,048,576
         * bytes. If you download an entire archive, the expected size is the size of the
         * archive when you uploaded it to Amazon S3 Glacier The expected size is also
         * returned in the headers from the <b>Get Job Output</b> response.</p> <p>In the
         * case of an archive retrieval job, depending on the byte range you specify,
         * Glacier returns the checksum for the portion of the data. To ensure the portion
         * you downloaded is the correct data, compute the checksum on the client, verify
         * that the values match, and verify that the size is what you expected.</p> <p>A
         * job ID does not expire for at least 24 hours after Glacier completes the job.
         * That is, you can download the job output within the 24 hours period after Amazon
         * Glacier completes the job.</p> <p>An AWS account has full permission to perform
         * all operations (actions). However, AWS Identity and Access Management (IAM)
         * users don't have any permissions by default. You must grant them explicit
         * permission to perform specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and the underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-inventory.html">Downloading
         * a Vault Inventory</a>, <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/downloading-an-archive.html">Downloading
         * an Archive</a>, and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-job-output-get.html">Get
         * Job Output </a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetJobOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutputOutcome GetJobOutput(const Model::GetJobOutputRequest& request) const;

        /**
         * A Callable wrapper for GetJobOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobOutputRequestT = Model::GetJobOutputRequest>
        Model::GetJobOutputOutcomeCallable GetJobOutputCallable(const GetJobOutputRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::GetJobOutput, request);
        }

        /**
         * An Async wrapper for GetJobOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobOutputRequestT = Model::GetJobOutputRequest>
        void GetJobOutputAsync(const GetJobOutputRequestT& request, const GetJobOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::GetJobOutput, request, handler, context);
        }

        /**
         * <p>This operation retrieves the <code>access-policy</code> subresource set on
         * the vault; for more information on setting this subresource, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-SetVaultAccessPolicy.html">Set
         * Vault Access Policy (PUT access-policy)</a>. If there is no access policy set on
         * the vault, the operation returns a <code>404 Not found</code> error. For more
         * information about vault access policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-access-policy.html">Amazon
         * Glacier Access Control with Vault Access Policies</a>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVaultAccessPolicyOutcome GetVaultAccessPolicy(const Model::GetVaultAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetVaultAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVaultAccessPolicyRequestT = Model::GetVaultAccessPolicyRequest>
        Model::GetVaultAccessPolicyOutcomeCallable GetVaultAccessPolicyCallable(const GetVaultAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::GetVaultAccessPolicy, request);
        }

        /**
         * An Async wrapper for GetVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVaultAccessPolicyRequestT = Model::GetVaultAccessPolicyRequest>
        void GetVaultAccessPolicyAsync(const GetVaultAccessPolicyRequestT& request, const GetVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::GetVaultAccessPolicy, request, handler, context);
        }

        /**
         * <p>This operation retrieves the following attributes from the
         * <code>lock-policy</code> subresource set on the specified vault: </p> <ul> <li>
         * <p>The vault lock policy set on the vault.</p> </li> <li> <p>The state of the
         * vault lock, which is either <code>InProgess</code> or <code>Locked</code>.</p>
         * </li> <li> <p>When the lock ID expires. The lock ID is used to complete the
         * vault locking process.</p> </li> <li> <p>When the vault lock was initiated and
         * put into the <code>InProgress</code> state.</p> </li> </ul> <p>A vault lock is
         * put into the <code>InProgress</code> state by calling <a>InitiateVaultLock</a>.
         * A vault lock is put into the <code>Locked</code> state by calling
         * <a>CompleteVaultLock</a>. You can abort the vault locking process by calling
         * <a>AbortVaultLock</a>. For more information about the vault locking process, <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon
         * Glacier Vault Lock</a>. </p> <p>If there is no vault lock policy set on the
         * vault, the operation returns a <code>404 Not found</code> error. For more
         * information about vault lock policies, <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock-policy.html">Amazon
         * Glacier Access Control with Vault Lock Policies</a>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetVaultLock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVaultLockOutcome GetVaultLock(const Model::GetVaultLockRequest& request) const;

        /**
         * A Callable wrapper for GetVaultLock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVaultLockRequestT = Model::GetVaultLockRequest>
        Model::GetVaultLockOutcomeCallable GetVaultLockCallable(const GetVaultLockRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::GetVaultLock, request);
        }

        /**
         * An Async wrapper for GetVaultLock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVaultLockRequestT = Model::GetVaultLockRequest>
        void GetVaultLockAsync(const GetVaultLockRequestT& request, const GetVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::GetVaultLock, request, handler, context);
        }

        /**
         * <p>This operation retrieves the <code>notification-configuration</code>
         * subresource of the specified vault.</p> <p>For information about setting a
         * notification configuration on a vault, see <a>SetVaultNotifications</a>. If a
         * notification configuration for a vault is not set, the operation returns a
         * <code>404 Not Found</code> error. For more information about vault
         * notifications, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring
         * Vault Notifications in Amazon S3 Glacier</a>. </p> <p>An AWS account has full
         * permission to perform all operations (actions). However, AWS Identity and Access
         * Management (IAM) users don't have any permissions by default. You must grant
         * them explicit permission to perform specific actions. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring
         * Vault Notifications in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-notifications-get.html">Get
         * Vault Notification Configuration </a> in the <i>Amazon Glacier Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVaultNotificationsOutcome GetVaultNotifications(const Model::GetVaultNotificationsRequest& request) const;

        /**
         * A Callable wrapper for GetVaultNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVaultNotificationsRequestT = Model::GetVaultNotificationsRequest>
        Model::GetVaultNotificationsOutcomeCallable GetVaultNotificationsCallable(const GetVaultNotificationsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::GetVaultNotifications, request);
        }

        /**
         * An Async wrapper for GetVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVaultNotificationsRequestT = Model::GetVaultNotificationsRequest>
        void GetVaultNotificationsAsync(const GetVaultNotificationsRequestT& request, const GetVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::GetVaultNotifications, request, handler, context);
        }

        /**
         * <p>This operation initiates a job of the specified type, which can be a select,
         * an archival retrieval, or a vault retrieval. For more information about using
         * this operation, see the documentation for the underlying REST API <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-initiate-job-post.html">Initiate
         * a Job</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateJobOutcome InitiateJob(const Model::InitiateJobRequest& request) const;

        /**
         * A Callable wrapper for InitiateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitiateJobRequestT = Model::InitiateJobRequest>
        Model::InitiateJobOutcomeCallable InitiateJobCallable(const InitiateJobRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::InitiateJob, request);
        }

        /**
         * An Async wrapper for InitiateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateJobRequestT = Model::InitiateJobRequest>
        void InitiateJobAsync(const InitiateJobRequestT& request, const InitiateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::InitiateJob, request, handler, context);
        }

        /**
         * <p>This operation initiates a multipart upload. Amazon S3 Glacier creates a
         * multipart upload resource and returns its ID in the response. The multipart
         * upload ID is used in subsequent requests to upload parts of an archive (see
         * <a>UploadMultipartPart</a>).</p> <p>When you initiate a multipart upload, you
         * specify the part size in number of bytes. The part size must be a megabyte (1024
         * KB) multiplied by a power of 2-for example, 1048576 (1 MB), 2097152 (2 MB),
         * 4194304 (4 MB), 8388608 (8 MB), and so on. The minimum allowable part size is 1
         * MB, and the maximum is 4 GB.</p> <p>Every part you upload to this resource (see
         * <a>UploadMultipartPart</a>), except the last one, must have the same size. The
         * last one can be the same size or smaller. For example, suppose you want to
         * upload a 16.2 MB file. If you initiate the multipart upload with a part size of
         * 4 MB, you will upload four parts of 4 MB each and one part of 0.2 MB. </p>
         *  <p>You don't need to know the size of the archive when you start a
         * multipart upload because Amazon S3 Glacier does not require you to specify the
         * overall archive size.</p>  <p>After you complete the multipart upload,
         * Amazon S3 Glacier (Glacier) removes the multipart upload resource referenced by
         * the ID. Glacier also removes the multipart upload resource if you cancel the
         * multipart upload or it may be removed if there is no activity for a period of 24
         * hours.</p> <p>An AWS account has full permission to perform all operations
         * (actions). However, AWS Identity and Access Management (IAM) users don't have
         * any permissions by default. You must grant them explicit permission to perform
         * specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-archive-mpu.html">Uploading
         * Large Archives in Parts (Multipart Upload)</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-initiate-upload.html">Initiate
         * Multipart Upload</a> in the <i>Amazon Glacier Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateMultipartUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateMultipartUploadOutcome InitiateMultipartUpload(const Model::InitiateMultipartUploadRequest& request) const;

        /**
         * A Callable wrapper for InitiateMultipartUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitiateMultipartUploadRequestT = Model::InitiateMultipartUploadRequest>
        Model::InitiateMultipartUploadOutcomeCallable InitiateMultipartUploadCallable(const InitiateMultipartUploadRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::InitiateMultipartUpload, request);
        }

        /**
         * An Async wrapper for InitiateMultipartUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateMultipartUploadRequestT = Model::InitiateMultipartUploadRequest>
        void InitiateMultipartUploadAsync(const InitiateMultipartUploadRequestT& request, const InitiateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::InitiateMultipartUpload, request, handler, context);
        }

        /**
         * <p>This operation initiates the vault locking process by doing the
         * following:</p> <ul> <li> <p>Installing a vault lock policy on the specified
         * vault.</p> </li> <li> <p>Setting the lock state of vault lock to
         * <code>InProgress</code>.</p> </li> <li> <p>Returning a lock ID, which is used to
         * complete the vault locking process.</p> </li> </ul> <p>You can set one vault
         * lock policy for each vault and this policy can be up to 20 KB in size. For more
         * information about vault lock policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock-policy.html">Amazon
         * Glacier Access Control with Vault Lock Policies</a>. </p> <p>You must complete
         * the vault locking process within 24 hours after the vault lock enters the
         * <code>InProgress</code> state. After the 24 hour window ends, the lock ID
         * expires, the vault automatically exits the <code>InProgress</code> state, and
         * the vault lock policy is removed from the vault. You call
         * <a>CompleteVaultLock</a> to complete the vault locking process by setting the
         * state of the vault lock to <code>Locked</code>. </p> <p>After a vault lock is in
         * the <code>Locked</code> state, you cannot initiate a new vault lock for the
         * vault.</p> <p>You can abort the vault locking process by calling
         * <a>AbortVaultLock</a>. You can get the state of the vault lock by calling
         * <a>GetVaultLock</a>. For more information about the vault locking process, <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-lock.html">Amazon
         * Glacier Vault Lock</a>.</p> <p>If this operation is called when the vault lock
         * is in the <code>InProgress</code> state, the operation returns an
         * <code>AccessDeniedException</code> error. When the vault lock is in the
         * <code>InProgress</code> state you must call <a>AbortVaultLock</a> before you can
         * initiate a new vault lock policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InitiateVaultLock">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateVaultLockOutcome InitiateVaultLock(const Model::InitiateVaultLockRequest& request) const;

        /**
         * A Callable wrapper for InitiateVaultLock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitiateVaultLockRequestT = Model::InitiateVaultLockRequest>
        Model::InitiateVaultLockOutcomeCallable InitiateVaultLockCallable(const InitiateVaultLockRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::InitiateVaultLock, request);
        }

        /**
         * An Async wrapper for InitiateVaultLock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateVaultLockRequestT = Model::InitiateVaultLockRequest>
        void InitiateVaultLockAsync(const InitiateVaultLockRequestT& request, const InitiateVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::InitiateVaultLock, request, handler, context);
        }

        /**
         * <p>This operation lists jobs for a vault, including jobs that are in-progress
         * and jobs that have recently finished. The List Job operation returns a list of
         * these jobs sorted by job initiation time.</p>  <p>Amazon Glacier retains
         * recently completed jobs for a period before deleting them; however, it
         * eventually removes completed jobs. The output of completed jobs can be
         * retrieved. Retaining completed jobs for a period of time after they have
         * completed enables you to get a job output in the event you miss the job
         * completion notification or your first attempt to download it fails. For example,
         * suppose you start an archive retrieval job to download an archive. After the job
         * completes, you start to download the archive but encounter a network error. In
         * this scenario, you can retry and download the archive while the job exists.</p>
         *  <p>The List Jobs operation supports pagination. You should always check
         * the response <code>Marker</code> field. If there are no more jobs to list, the
         * <code>Marker</code> field is set to <code>null</code>. If there are more jobs to
         * list, the <code>Marker</code> field is set to a non-null value, which you can
         * use to continue the pagination of the list. To return a list of jobs that begins
         * at a specific job, set the marker request parameter to the <code>Marker</code>
         * value for that job that you obtained from a previous List Jobs request.</p>
         * <p>You can set a maximum limit for the number of jobs returned in the response
         * by specifying the <code>limit</code> parameter in the request. The default limit
         * is 50. The number of jobs returned might be fewer than the limit, but the number
         * of returned jobs never exceeds the limit.</p> <p>Additionally, you can filter
         * the jobs list returned by specifying the optional <code>statuscode</code>
         * parameter or <code>completed</code> parameter, or both. Using the
         * <code>statuscode</code> parameter, you can specify to return only jobs that
         * match either the <code>InProgress</code>, <code>Succeeded</code>, or
         * <code>Failed</code> status. Using the <code>completed</code> parameter, you can
         * specify to return only jobs that were completed (<code>true</code>) or jobs that
         * were not completed (<code>false</code>).</p> <p>For more information about using
         * this operation, see the documentation for the underlying REST API <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-jobs-get.html">List
         * Jobs</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::ListJobs, request, handler, context);
        }

        /**
         * <p>This operation lists in-progress multipart uploads for the specified vault.
         * An in-progress multipart upload is a multipart upload that has been initiated by
         * an <a>InitiateMultipartUpload</a> request, but has not yet been completed or
         * aborted. The list returned in the List Multipart Upload response has no
         * guaranteed order. </p> <p>The List Multipart Uploads operation supports
         * pagination. By default, this operation returns up to 50 multipart uploads in the
         * response. You should always check the response for a <code>marker</code> at
         * which to continue the list; if there are no more items the <code>marker</code>
         * is <code>null</code>. To return a list of multipart uploads that begins at a
         * specific upload, set the <code>marker</code> request parameter to the value you
         * obtained from a previous List Multipart Upload request. You can also limit the
         * number of uploads returned in the response by specifying the <code>limit</code>
         * parameter in the request.</p> <p>Note the difference between this operation and
         * listing parts (<a>ListParts</a>). The List Multipart Uploads operation lists all
         * multipart uploads for a vault and does not require a multipart upload ID. The
         * List Parts operation requires a multipart upload ID since parts are associated
         * with a single upload.</p> <p>An AWS account has full permission to perform all
         * operations (actions). However, AWS Identity and Access Management (IAM) users
         * don't have any permissions by default. You must grant them explicit permission
         * to perform specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and the underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working
         * with Archives in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-list-uploads.html">List
         * Multipart Uploads </a> in the <i>Amazon Glacier Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListMultipartUploads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultipartUploadsOutcome ListMultipartUploads(const Model::ListMultipartUploadsRequest& request) const;

        /**
         * A Callable wrapper for ListMultipartUploads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMultipartUploadsRequestT = Model::ListMultipartUploadsRequest>
        Model::ListMultipartUploadsOutcomeCallable ListMultipartUploadsCallable(const ListMultipartUploadsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::ListMultipartUploads, request);
        }

        /**
         * An Async wrapper for ListMultipartUploads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMultipartUploadsRequestT = Model::ListMultipartUploadsRequest>
        void ListMultipartUploadsAsync(const ListMultipartUploadsRequestT& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::ListMultipartUploads, request, handler, context);
        }

        /**
         * <p>This operation lists the parts of an archive that have been uploaded in a
         * specific multipart upload. You can make this request at any time during an
         * in-progress multipart upload before you complete the upload (see
         * <a>CompleteMultipartUpload</a>. List Parts returns an error for completed
         * uploads. The list returned in the List Parts response is sorted by part range.
         * </p> <p>The List Parts operation supports pagination. By default, this operation
         * returns up to 50 uploaded parts in the response. You should always check the
         * response for a <code>marker</code> at which to continue the list; if there are
         * no more items the <code>marker</code> is <code>null</code>. To return a list of
         * parts that begins at a specific part, set the <code>marker</code> request
         * parameter to the value you obtained from a previous List Parts request. You can
         * also limit the number of parts returned in the response by specifying the
         * <code>limit</code> parameter in the request. </p> <p>An AWS account has full
         * permission to perform all operations (actions). However, AWS Identity and Access
         * Management (IAM) users don't have any permissions by default. You must grant
         * them explicit permission to perform specific actions. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and the underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/working-with-archives.html">Working
         * with Archives in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-multipart-list-parts.html">List
         * Parts</a> in the <i>Amazon Glacier Developer Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListParts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPartsOutcome ListParts(const Model::ListPartsRequest& request) const;

        /**
         * A Callable wrapper for ListParts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPartsRequestT = Model::ListPartsRequest>
        Model::ListPartsOutcomeCallable ListPartsCallable(const ListPartsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::ListParts, request);
        }

        /**
         * An Async wrapper for ListParts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPartsRequestT = Model::ListPartsRequest>
        void ListPartsAsync(const ListPartsRequestT& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::ListParts, request, handler, context);
        }

        /**
         * <p>This operation lists the provisioned capacity units for the specified AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListProvisionedCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedCapacityOutcome ListProvisionedCapacity(const Model::ListProvisionedCapacityRequest& request) const;

        /**
         * A Callable wrapper for ListProvisionedCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProvisionedCapacityRequestT = Model::ListProvisionedCapacityRequest>
        Model::ListProvisionedCapacityOutcomeCallable ListProvisionedCapacityCallable(const ListProvisionedCapacityRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::ListProvisionedCapacity, request);
        }

        /**
         * An Async wrapper for ListProvisionedCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisionedCapacityRequestT = Model::ListProvisionedCapacityRequest>
        void ListProvisionedCapacityAsync(const ListProvisionedCapacityRequestT& request, const ListProvisionedCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::ListProvisionedCapacity, request, handler, context);
        }

        /**
         * <p>This operation lists all the tags attached to a vault. The operation returns
         * an empty map if there are no tags. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/tagging.html">Tagging
         * Amazon S3 Glacier Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListTagsForVault">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForVaultOutcome ListTagsForVault(const Model::ListTagsForVaultRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForVaultRequestT = Model::ListTagsForVaultRequest>
        Model::ListTagsForVaultOutcomeCallable ListTagsForVaultCallable(const ListTagsForVaultRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::ListTagsForVault, request);
        }

        /**
         * An Async wrapper for ListTagsForVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForVaultRequestT = Model::ListTagsForVaultRequest>
        void ListTagsForVaultAsync(const ListTagsForVaultRequestT& request, const ListTagsForVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::ListTagsForVault, request, handler, context);
        }

        /**
         * <p>This operation lists all vaults owned by the calling user's account. The list
         * returned in the response is ASCII-sorted by vault name.</p> <p>By default, this
         * operation returns up to 10 items. If there are more vaults to list, the response
         * <code>marker</code> field contains the vault Amazon Resource Name (ARN) at which
         * to continue the list with a new List Vaults request; otherwise, the
         * <code>marker</code> field is <code>null</code>. To return a list of vaults that
         * begins at a specific vault, set the <code>marker</code> request parameter to the
         * vault ARN you obtained from a previous List Vaults request. You can also limit
         * the number of vaults returned in the response by specifying the
         * <code>limit</code> parameter in the request. </p> <p>An AWS account has full
         * permission to perform all operations (actions). However, AWS Identity and Access
         * Management (IAM) users don't have any permissions by default. You must grant
         * them explicit permission to perform specific actions. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/retrieving-vault-info.html">Retrieving
         * Vault Metadata in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vaults-get.html">List
         * Vaults </a> in the <i>Amazon Glacier Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListVaults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVaultsOutcome ListVaults(const Model::ListVaultsRequest& request) const;

        /**
         * A Callable wrapper for ListVaults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVaultsRequestT = Model::ListVaultsRequest>
        Model::ListVaultsOutcomeCallable ListVaultsCallable(const ListVaultsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::ListVaults, request);
        }

        /**
         * An Async wrapper for ListVaults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVaultsRequestT = Model::ListVaultsRequest>
        void ListVaultsAsync(const ListVaultsRequestT& request, const ListVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::ListVaults, request, handler, context);
        }

        /**
         * <p>This operation purchases a provisioned capacity unit for an AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/PurchaseProvisionedCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseProvisionedCapacityOutcome PurchaseProvisionedCapacity(const Model::PurchaseProvisionedCapacityRequest& request) const;

        /**
         * A Callable wrapper for PurchaseProvisionedCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseProvisionedCapacityRequestT = Model::PurchaseProvisionedCapacityRequest>
        Model::PurchaseProvisionedCapacityOutcomeCallable PurchaseProvisionedCapacityCallable(const PurchaseProvisionedCapacityRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::PurchaseProvisionedCapacity, request);
        }

        /**
         * An Async wrapper for PurchaseProvisionedCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseProvisionedCapacityRequestT = Model::PurchaseProvisionedCapacityRequest>
        void PurchaseProvisionedCapacityAsync(const PurchaseProvisionedCapacityRequestT& request, const PurchaseProvisionedCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::PurchaseProvisionedCapacity, request, handler, context);
        }

        /**
         * <p>This operation removes one or more tags from the set of tags attached to a
         * vault. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/tagging.html">Tagging
         * Amazon S3 Glacier Resources</a>. This operation is idempotent. The operation
         * will be successful, even if there are no tags attached to the vault.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/RemoveTagsFromVault">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromVaultOutcome RemoveTagsFromVault(const Model::RemoveTagsFromVaultRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromVault that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromVaultRequestT = Model::RemoveTagsFromVaultRequest>
        Model::RemoveTagsFromVaultOutcomeCallable RemoveTagsFromVaultCallable(const RemoveTagsFromVaultRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::RemoveTagsFromVault, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromVault that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromVaultRequestT = Model::RemoveTagsFromVaultRequest>
        void RemoveTagsFromVaultAsync(const RemoveTagsFromVaultRequestT& request, const RemoveTagsFromVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::RemoveTagsFromVault, request, handler, context);
        }

        /**
         * <p>This operation sets and then enacts a data retrieval policy in the region
         * specified in the PUT request. You can set one policy per region for an AWS
         * account. The policy is enacted within a few minutes of a successful PUT
         * operation.</p> <p>The set policy operation does not affect retrieval jobs that
         * were in progress before the policy was enacted. For more information about data
         * retrieval policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/data-retrieval-policy.html">Amazon
         * Glacier Data Retrieval Policies</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/SetDataRetrievalPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDataRetrievalPolicyOutcome SetDataRetrievalPolicy(const Model::SetDataRetrievalPolicyRequest& request) const;

        /**
         * A Callable wrapper for SetDataRetrievalPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetDataRetrievalPolicyRequestT = Model::SetDataRetrievalPolicyRequest>
        Model::SetDataRetrievalPolicyOutcomeCallable SetDataRetrievalPolicyCallable(const SetDataRetrievalPolicyRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::SetDataRetrievalPolicy, request);
        }

        /**
         * An Async wrapper for SetDataRetrievalPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDataRetrievalPolicyRequestT = Model::SetDataRetrievalPolicyRequest>
        void SetDataRetrievalPolicyAsync(const SetDataRetrievalPolicyRequestT& request, const SetDataRetrievalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::SetDataRetrievalPolicy, request, handler, context);
        }

        /**
         * <p>This operation configures an access policy for a vault and will overwrite an
         * existing policy. To configure a vault access policy, send a PUT request to the
         * <code>access-policy</code> subresource of the vault. An access policy is
         * specific to a vault and is also called a vault subresource. You can set one
         * access policy per vault and the policy can be up to 20 KB in size. For more
         * information about vault access policies, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/vault-access-policy.html">Amazon
         * Glacier Access Control with Vault Access Policies</a>. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/SetVaultAccessPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVaultAccessPolicyOutcome SetVaultAccessPolicy(const Model::SetVaultAccessPolicyRequest& request) const;

        /**
         * A Callable wrapper for SetVaultAccessPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetVaultAccessPolicyRequestT = Model::SetVaultAccessPolicyRequest>
        Model::SetVaultAccessPolicyOutcomeCallable SetVaultAccessPolicyCallable(const SetVaultAccessPolicyRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::SetVaultAccessPolicy, request);
        }

        /**
         * An Async wrapper for SetVaultAccessPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetVaultAccessPolicyRequestT = Model::SetVaultAccessPolicyRequest>
        void SetVaultAccessPolicyAsync(const SetVaultAccessPolicyRequestT& request, const SetVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::SetVaultAccessPolicy, request, handler, context);
        }

        /**
         * <p>This operation configures notifications that will be sent when specific
         * events happen to a vault. By default, you don't get any notifications.</p> <p>To
         * configure vault notifications, send a PUT request to the
         * <code>notification-configuration</code> subresource of the vault. The request
         * should include a JSON document that provides an Amazon SNS topic and specific
         * events for which you want Amazon S3 Glacier to send notifications to the
         * topic.</p> <p>Amazon SNS topics must grant permission to the vault to be allowed
         * to publish notifications to the topic. You can configure a vault to publish a
         * notification for the following vault events:</p> <ul> <li> <p>
         * <b>ArchiveRetrievalCompleted</b> This event occurs when a job that was initiated
         * for an archive retrieval is completed (<a>InitiateJob</a>). The status of the
         * completed job can be "Succeeded" or "Failed". The notification sent to the SNS
         * topic is the same output as returned from <a>DescribeJob</a>. </p> </li> <li>
         * <p> <b>InventoryRetrievalCompleted</b> This event occurs when a job that was
         * initiated for an inventory retrieval is completed (<a>InitiateJob</a>). The
         * status of the completed job can be "Succeeded" or "Failed". The notification
         * sent to the SNS topic is the same output as returned from <a>DescribeJob</a>.
         * </p> </li> </ul> <p>An AWS account has full permission to perform all operations
         * (actions). However, AWS Identity and Access Management (IAM) users don't have
         * any permissions by default. You must grant them explicit permission to perform
         * specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p>For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/configuring-notifications.html">Configuring
         * Vault Notifications in Amazon S3 Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-vault-notifications-put.html">Set
         * Vault Notification Configuration </a> in the <i>Amazon Glacier Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/SetVaultNotifications">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVaultNotificationsOutcome SetVaultNotifications(const Model::SetVaultNotificationsRequest& request) const;

        /**
         * A Callable wrapper for SetVaultNotifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetVaultNotificationsRequestT = Model::SetVaultNotificationsRequest>
        Model::SetVaultNotificationsOutcomeCallable SetVaultNotificationsCallable(const SetVaultNotificationsRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::SetVaultNotifications, request);
        }

        /**
         * An Async wrapper for SetVaultNotifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetVaultNotificationsRequestT = Model::SetVaultNotificationsRequest>
        void SetVaultNotificationsAsync(const SetVaultNotificationsRequestT& request, const SetVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::SetVaultNotifications, request, handler, context);
        }

        /**
         * <p>This operation adds an archive to a vault. This is a synchronous operation,
         * and for a successful upload, your data is durably persisted. Amazon S3 Glacier
         * returns the archive ID in the <code>x-amz-archive-id</code> header of the
         * response. </p> <p>You must use the archive ID to access your data in Amazon S3
         * Glacier. After you upload an archive, you should save the archive ID returned so
         * that you can retrieve or delete the archive later. Besides saving the archive
         * ID, you can also index it and give it a friendly name to allow for better
         * searching. You can also use the optional archive description field to specify
         * how the archive is referred to in an external index of archives, such as you
         * might create in Amazon DynamoDB. You can also get the vault inventory to obtain
         * a list of archive IDs in a vault. For more information, see <a>InitiateJob</a>.
         * </p> <p>You must provide a SHA256 tree hash of the data you are uploading. For
         * information about computing a SHA256 tree hash, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html">Computing
         * Checksums</a>. </p> <p>You can optionally specify an archive description of up
         * to 1,024 printable ASCII characters. You can get the archive description when
         * you either retrieve the archive or get the vault inventory. For more
         * information, see <a>InitiateJob</a>. Amazon Glacier does not interpret the
         * description in any way. An archive description does not need to be unique. You
         * cannot use the description to retrieve or sort the archive list. </p>
         * <p>Archives are immutable. After you upload an archive, you cannot edit the
         * archive or its description.</p> <p>An AWS account has full permission to perform
         * all operations (actions). However, AWS Identity and Access Management (IAM)
         * users don't have any permissions by default. You must grant them explicit
         * permission to perform specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-an-archive.html">Uploading
         * an Archive in Amazon Glacier</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-archive-post.html">Upload
         * Archive</a> in the <i>Amazon Glacier Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadArchiveOutcome UploadArchive(const Model::UploadArchiveRequest& request) const;

        /**
         * A Callable wrapper for UploadArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UploadArchiveRequestT = Model::UploadArchiveRequest>
        Model::UploadArchiveOutcomeCallable UploadArchiveCallable(const UploadArchiveRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::UploadArchive, request);
        }

        /**
         * An Async wrapper for UploadArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UploadArchiveRequestT = Model::UploadArchiveRequest>
        void UploadArchiveAsync(const UploadArchiveRequestT& request, const UploadArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::UploadArchive, request, handler, context);
        }

        /**
         * <p>This operation uploads a part of an archive. You can upload archive parts in
         * any order. You can also upload them in parallel. You can upload up to 10,000
         * parts for a multipart upload.</p> <p>Amazon Glacier rejects your upload part
         * request if any of the following conditions is true:</p> <ul> <li> <p> <b>SHA256
         * tree hash does not match</b>To ensure that part data is not corrupted in
         * transmission, you compute a SHA256 tree hash of the part and include it in your
         * request. Upon receiving the part data, Amazon S3 Glacier also computes a SHA256
         * tree hash. If these hash values don't match, the operation fails. For
         * information about computing a SHA256 tree hash, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/checksum-calculations.html">Computing
         * Checksums</a>.</p> </li> <li> <p> <b>Part size does not match</b>The size of
         * each part except the last must match the size specified in the corresponding
         * <a>InitiateMultipartUpload</a> request. The size of the last part must be the
         * same size as, or smaller than, the specified size.</p>  <p>If you upload a
         * part whose size is smaller than the part size you specified in your initiate
         * multipart upload request and that part is not the last part, then the upload
         * part request will succeed. However, the subsequent Complete Multipart Upload
         * request will fail.</p>  </li> <li> <p> <b>Range does not align</b>The
         * byte range value in the request does not align with the part size specified in
         * the corresponding initiate request. For example, if you specify a part size of
         * 4194304 bytes (4 MB), then 0 to 4194303 bytes (4 MB - 1) and 4194304 (4 MB) to
         * 8388607 (8 MB - 1) are valid part ranges. However, if you set a range value of 2
         * MB to 6 MB, the range does not align with the part size and the upload will
         * fail. </p> </li> </ul> <p>This operation is idempotent. If you upload the same
         * part multiple times, the data included in the most recent request overwrites the
         * previously uploaded data.</p> <p>An AWS account has full permission to perform
         * all operations (actions). However, AWS Identity and Access Management (IAM)
         * users don't have any permissions by default. You must grant them explicit
         * permission to perform specific actions. For more information, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/using-iam-with-amazon-glacier.html">Access
         * Control Using AWS Identity and Access Management (IAM)</a>.</p> <p> For
         * conceptual information and underlying REST API, see <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/uploading-archive-mpu.html">Uploading
         * Large Archives in Parts (Multipart Upload)</a> and <a
         * href="https://docs.aws.amazon.com/amazonglacier/latest/dev/api-upload-part.html">Upload
         * Part </a> in the <i>Amazon Glacier Developer Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/UploadMultipartPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadMultipartPartOutcome UploadMultipartPart(const Model::UploadMultipartPartRequest& request) const;

        /**
         * A Callable wrapper for UploadMultipartPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UploadMultipartPartRequestT = Model::UploadMultipartPartRequest>
        Model::UploadMultipartPartOutcomeCallable UploadMultipartPartCallable(const UploadMultipartPartRequestT& request) const
        {
            return SubmitCallable(&GlacierClient::UploadMultipartPart, request);
        }

        /**
         * An Async wrapper for UploadMultipartPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UploadMultipartPartRequestT = Model::UploadMultipartPartRequest>
        void UploadMultipartPartAsync(const UploadMultipartPartRequestT& request, const UploadMultipartPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlacierClient::UploadMultipartPart, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GlacierEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GlacierClient>;
      void init(const GlacierClientConfiguration& clientConfiguration);

      GlacierClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlacierEndpointProviderBase> m_endpointProvider;
  };

} // namespace Glacier
} // namespace Aws
