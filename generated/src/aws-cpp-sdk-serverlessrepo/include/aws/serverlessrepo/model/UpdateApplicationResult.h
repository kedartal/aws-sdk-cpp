﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/Version.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{
  class UpdateApplicationResult
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationResult();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline UpdateApplicationResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline UpdateApplicationResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline UpdateApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(const Aws::String& value) { m_author = value; }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(Aws::String&& value) { m_author = std::move(value); }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline void SetAuthor(const char* value) { m_author.assign(value); }

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline UpdateApplicationResult& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline UpdateApplicationResult& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * <p>The name of the author publishing the app.</p><p>Minimum length=1. Maximum
     * length=127.</p><p>Pattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";</p>
     */
    inline UpdateApplicationResult& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * <p>The date and time this resource was created.</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTime = value; }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTime.assign(value); }

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline UpdateApplicationResult& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline UpdateApplicationResult& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time this resource was created.</p>
     */
    inline UpdateApplicationResult& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline UpdateApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline UpdateApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p><p>Minimum length=1. Maximum
     * length=256</p>
     */
    inline UpdateApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline const Aws::String& GetHomePageUrl() const{ return m_homePageUrl; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(const Aws::String& value) { m_homePageUrl = value; }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(Aws::String&& value) { m_homePageUrl = std::move(value); }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline void SetHomePageUrl(const char* value) { m_homePageUrl.assign(value); }

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline UpdateApplicationResult& WithHomePageUrl(const Aws::String& value) { SetHomePageUrl(value); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline UpdateApplicationResult& WithHomePageUrl(Aws::String&& value) { SetHomePageUrl(std::move(value)); return *this;}

    /**
     * <p>A URL with more information about the application, for example the location
     * of your GitHub repository for the application.</p>
     */
    inline UpdateApplicationResult& WithHomePageUrl(const char* value) { SetHomePageUrl(value); return *this;}


    /**
     * <p>Whether the author of this application has been verified. This means means
     * that AWS has made a good faith review, as a reasonable and prudent service
     * provider, of the information provided by the requester and has confirmed that
     * the requester's identity is as claimed.</p>
     */
    inline bool GetIsVerifiedAuthor() const{ return m_isVerifiedAuthor; }

    /**
     * <p>Whether the author of this application has been verified. This means means
     * that AWS has made a good faith review, as a reasonable and prudent service
     * provider, of the information provided by the requester and has confirmed that
     * the requester's identity is as claimed.</p>
     */
    inline void SetIsVerifiedAuthor(bool value) { m_isVerifiedAuthor = value; }

    /**
     * <p>Whether the author of this application has been verified. This means means
     * that AWS has made a good faith review, as a reasonable and prudent service
     * provider, of the information provided by the requester and has confirmed that
     * the requester's identity is as claimed.</p>
     */
    inline UpdateApplicationResult& WithIsVerifiedAuthor(bool value) { SetIsVerifiedAuthor(value); return *this;}


    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labels = value; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labels = std::move(value); }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationResult& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationResult& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationResult& AddLabels(const Aws::String& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationResult& AddLabels(Aws::String&& value) { m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>Labels to improve discovery of apps in search results.</p><p>Minimum
     * length=1. Maximum length=127. Maximum number of labels: 10</p><p>Pattern:
     * "^[a-zA-Z0-9+\\-_:\\/@]+$";</p>
     */
    inline UpdateApplicationResult& AddLabels(const char* value) { m_labels.push_back(value); return *this; }


    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrl = value; }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrl = std::move(value); }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline void SetLicenseUrl(const char* value) { m_licenseUrl.assign(value); }

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationResult& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationResult& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}

    /**
     * <p>A link to a license file of the app that matches the spdxLicenseID value of
     * your application.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationResult& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}


    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline UpdateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline UpdateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p><p>Minimum length=1. Maximum
     * length=140</p><p>Pattern: "[a-zA-Z0-9\\-]+";</p>
     */
    inline UpdateApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrl = value; }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrl = std::move(value); }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrl.assign(value); }

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationResult& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationResult& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * <p>A link to the readme file in Markdown language that contains a more detailed
     * description of the application and how it works.</p><p>Maximum size 5 MB</p>
     */
    inline UpdateApplicationResult& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}


    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline const Aws::String& GetSpdxLicenseId() const{ return m_spdxLicenseId; }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline void SetSpdxLicenseId(const Aws::String& value) { m_spdxLicenseId = value; }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline void SetSpdxLicenseId(Aws::String&& value) { m_spdxLicenseId = std::move(value); }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline void SetSpdxLicenseId(const char* value) { m_spdxLicenseId.assign(value); }

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline UpdateApplicationResult& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline UpdateApplicationResult& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * <p>A valid identifier from https://spdx.org/licenses/.</p>
     */
    inline UpdateApplicationResult& WithSpdxLicenseId(const char* value) { SetSpdxLicenseId(value); return *this;}


    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline const Aws::String& GetVerifiedAuthorUrl() const{ return m_verifiedAuthorUrl; }

    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline void SetVerifiedAuthorUrl(const Aws::String& value) { m_verifiedAuthorUrl = value; }

    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline void SetVerifiedAuthorUrl(Aws::String&& value) { m_verifiedAuthorUrl = std::move(value); }

    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline void SetVerifiedAuthorUrl(const char* value) { m_verifiedAuthorUrl.assign(value); }

    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline UpdateApplicationResult& WithVerifiedAuthorUrl(const Aws::String& value) { SetVerifiedAuthorUrl(value); return *this;}

    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline UpdateApplicationResult& WithVerifiedAuthorUrl(Aws::String&& value) { SetVerifiedAuthorUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to the public profile of a verified author. This URL is submitted by
     * the author.</p>
     */
    inline UpdateApplicationResult& WithVerifiedAuthorUrl(const char* value) { SetVerifiedAuthorUrl(value); return *this;}


    /**
     * <p>Version information about the application.</p>
     */
    inline const Version& GetVersion() const{ return m_version; }

    /**
     * <p>Version information about the application.</p>
     */
    inline void SetVersion(const Version& value) { m_version = value; }

    /**
     * <p>Version information about the application.</p>
     */
    inline void SetVersion(Version&& value) { m_version = std::move(value); }

    /**
     * <p>Version information about the application.</p>
     */
    inline UpdateApplicationResult& WithVersion(const Version& value) { SetVersion(value); return *this;}

    /**
     * <p>Version information about the application.</p>
     */
    inline UpdateApplicationResult& WithVersion(Version&& value) { SetVersion(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_author;

    Aws::String m_creationTime;

    Aws::String m_description;

    Aws::String m_homePageUrl;

    bool m_isVerifiedAuthor;

    Aws::Vector<Aws::String> m_labels;

    Aws::String m_licenseUrl;

    Aws::String m_name;

    Aws::String m_readmeUrl;

    Aws::String m_spdxLicenseId;

    Aws::String m_verifiedAuthorUrl;

    Version m_version;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
