﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/DescribeVaultOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVaultOutput
  {
  public:
    AWS_GLACIER_API DescribeVaultOutput();
    AWS_GLACIER_API DescribeVaultOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API DescribeVaultOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline const Aws::String& GetVaultARN() const{ return m_vaultARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline bool VaultARNHasBeenSet() const { return m_vaultARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline void SetVaultARN(const Aws::String& value) { m_vaultARNHasBeenSet = true; m_vaultARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline void SetVaultARN(Aws::String&& value) { m_vaultARNHasBeenSet = true; m_vaultARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline void SetVaultARN(const char* value) { m_vaultARNHasBeenSet = true; m_vaultARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline DescribeVaultOutput& WithVaultARN(const Aws::String& value) { SetVaultARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline DescribeVaultOutput& WithVaultARN(Aws::String&& value) { SetVaultARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the vault.</p>
     */
    inline DescribeVaultOutput& WithVaultARN(const char* value) { SetVaultARN(value); return *this;}


    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline DescribeVaultOutput& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline DescribeVaultOutput& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline DescribeVaultOutput& WithVaultName(const char* value) { SetVaultName(value); return *this;}


    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline DescribeVaultOutput& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline DescribeVaultOutput& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The Universal Coordinated Time (UTC) date when the vault was created. This
     * value should be a string in the ISO 8601 date format, for example
     * <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline DescribeVaultOutput& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline const Aws::String& GetLastInventoryDate() const{ return m_lastInventoryDate; }

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline bool LastInventoryDateHasBeenSet() const { return m_lastInventoryDateHasBeenSet; }

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline void SetLastInventoryDate(const Aws::String& value) { m_lastInventoryDateHasBeenSet = true; m_lastInventoryDate = value; }

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline void SetLastInventoryDate(Aws::String&& value) { m_lastInventoryDateHasBeenSet = true; m_lastInventoryDate = std::move(value); }

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline void SetLastInventoryDate(const char* value) { m_lastInventoryDateHasBeenSet = true; m_lastInventoryDate.assign(value); }

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline DescribeVaultOutput& WithLastInventoryDate(const Aws::String& value) { SetLastInventoryDate(value); return *this;}

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline DescribeVaultOutput& WithLastInventoryDate(Aws::String&& value) { SetLastInventoryDate(std::move(value)); return *this;}

    /**
     * <p>The Universal Coordinated Time (UTC) date when Amazon S3 Glacier completed
     * the last vault inventory. This value should be a string in the ISO 8601 date
     * format, for example <code>2012-03-20T17:03:43.221Z</code>.</p>
     */
    inline DescribeVaultOutput& WithLastInventoryDate(const char* value) { SetLastInventoryDate(value); return *this;}


    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline long long GetNumberOfArchives() const{ return m_numberOfArchives; }

    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline bool NumberOfArchivesHasBeenSet() const { return m_numberOfArchivesHasBeenSet; }

    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline void SetNumberOfArchives(long long value) { m_numberOfArchivesHasBeenSet = true; m_numberOfArchives = value; }

    /**
     * <p>The number of archives in the vault as of the last inventory date. This field
     * will return <code>null</code> if an inventory has not yet run on the vault, for
     * example if you just created the vault.</p>
     */
    inline DescribeVaultOutput& WithNumberOfArchives(long long value) { SetNumberOfArchives(value); return *this;}


    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }

    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }

    /**
     * <p>Total size, in bytes, of the archives in the vault as of the last inventory
     * date. This field will return null if an inventory has not yet run on the vault,
     * for example if you just created the vault.</p>
     */
    inline DescribeVaultOutput& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}

  private:

    Aws::String m_vaultARN;
    bool m_vaultARNHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastInventoryDate;
    bool m_lastInventoryDateHasBeenSet = false;

    long long m_numberOfArchives;
    bool m_numberOfArchivesHasBeenSet = false;

    long long m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
