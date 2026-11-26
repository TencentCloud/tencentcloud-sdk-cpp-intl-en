/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONPROJECT_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONPROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Cloud application project type.
                */
                class ApplicationProject : public AbstractModel
                {
                public:
                    ApplicationProject();
                    ~ApplicationProject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Project ID.</p>
                     * @return ProjectId <p>Project ID.</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>Project ID.</p>
                     * @param _projectId <p>Project ID.</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Project name.</p>
                     * @return Name <p>Project name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Project name.</p>
                     * @param _name <p>Project name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Project description.</p>
                     * @return Description <p>Project description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Project description.</p>
                     * @param _description <p>Project description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Concurrency type required for project operation.<br>S1: Small-scale cloud application rendering concurrency<br>M1: Medium cloud application rendering concurrency<br>L1: Large cloud application rendering concurrency<br>L2: Large cloud application rendering concurrency<br>XL2: Ultra-large cloud application rendering concurrency<br>MM1_HD: Performance Cloud ARM concurrency - high-definition<br>MM1_FHD: Performance Cloud ARM concurrency - ultra-high-definition</p>
                     * @return Type <p>Concurrency type required for project operation.<br>S1: Small-scale cloud application rendering concurrency<br>M1: Medium cloud application rendering concurrency<br>L1: Large cloud application rendering concurrency<br>L2: Large cloud application rendering concurrency<br>XL2: Ultra-large cloud application rendering concurrency<br>MM1_HD: Performance Cloud ARM concurrency - high-definition<br>MM1_FHD: Performance Cloud ARM concurrency - ultra-high-definition</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Concurrency type required for project operation.<br>S1: Small-scale cloud application rendering concurrency<br>M1: Medium cloud application rendering concurrency<br>L1: Large cloud application rendering concurrency<br>L2: Large cloud application rendering concurrency<br>XL2: Ultra-large cloud application rendering concurrency<br>MM1_HD: Performance Cloud ARM concurrency - high-definition<br>MM1_FHD: Performance Cloud ARM concurrency - ultra-high-definition</p>
                     * @param _type <p>Concurrency type required for project operation.<br>S1: Small-scale cloud application rendering concurrency<br>M1: Medium cloud application rendering concurrency<br>L1: Large cloud application rendering concurrency<br>L2: Large cloud application rendering concurrency<br>XL2: Ultra-large cloud application rendering concurrency<br>MM1_HD: Performance Cloud ARM concurrency - high-definition<br>MM1_FHD: Performance Cloud ARM concurrency - ultra-high-definition</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Cloud Application ID</p>
                     * @return ApplicationId <p>Cloud Application ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>Cloud Application ID</p>
                     * @param _applicationId <p>Cloud Application ID</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>Pre-launch</p>
                     * @return IsPreload <p>Pre-launch</p>
                     * 
                     */
                    bool GetIsPreload() const;

                    /**
                     * 设置<p>Pre-launch</p>
                     * @param _isPreload <p>Pre-launch</p>
                     * 
                     */
                    void SetIsPreload(const bool& _isPreload);

                    /**
                     * 判断参数 IsPreload 是否已赋值
                     * @return IsPreload 是否已赋值
                     * 
                     */
                    bool IsPreloadHasBeenSet() const;

                    /**
                     * 获取<p>Configured concurrency</p>
                     * @return Amount <p>Configured concurrency</p>
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置<p>Configured concurrency</p>
                     * @param _amount <p>Configured concurrency</p>
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取<p>Number of concurrencies in use</p>
                     * @return Using <p>Number of concurrencies in use</p>
                     * 
                     */
                    int64_t GetUsing() const;

                    /**
                     * 设置<p>Number of concurrencies in use</p>
                     * @param _using <p>Number of concurrencies in use</p>
                     * 
                     */
                    void SetUsing(const int64_t& _using);

                    /**
                     * 判断参数 Using 是否已赋值
                     * @return Using 是否已赋值
                     * 
                     */
                    bool UsingHasBeenSet() const;

                    /**
                     * 获取<p>Application status: NoConcurrent - no concurrency package configured, Online - launched, other statuses are cloud application status: applicationCreating - creating, applicationCreateFail - creation failed, applicationDeleting - deleting, applicationNoConfigured - startup parameter not configured</p>
                     * @return ApplicationStatus <p>Application status: NoConcurrent - no concurrency package configured, Online - launched, other statuses are cloud application status: applicationCreating - creating, applicationCreateFail - creation failed, applicationDeleting - deleting, applicationNoConfigured - startup parameter not configured</p>
                     * 
                     */
                    std::string GetApplicationStatus() const;

                    /**
                     * 设置<p>Application status: NoConcurrent - no concurrency package configured, Online - launched, other statuses are cloud application status: applicationCreating - creating, applicationCreateFail - creation failed, applicationDeleting - deleting, applicationNoConfigured - startup parameter not configured</p>
                     * @param _applicationStatus <p>Application status: NoConcurrent - no concurrency package configured, Online - launched, other statuses are cloud application status: applicationCreating - creating, applicationCreateFail - creation failed, applicationDeleting - deleting, applicationNoConfigured - startup parameter not configured</p>
                     * 
                     */
                    void SetApplicationStatus(const std::string& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     * 
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取<p>Application startup parameter</p>
                     * @return ApplicationParams <p>Application startup parameter</p>
                     * 
                     */
                    std::string GetApplicationParams() const;

                    /**
                     * 设置<p>Application startup parameter</p>
                     * @param _applicationParams <p>Application startup parameter</p>
                     * 
                     */
                    void SetApplicationParams(const std::string& _applicationParams);

                    /**
                     * 判断参数 ApplicationParams 是否已赋值
                     * @return ApplicationParams 是否已赋值
                     * 
                     */
                    bool ApplicationParamsHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Application name</p>
                     * @return ApplicationName <p>Application name</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Application name</p>
                     * @param _applicationName <p>Application name</p>
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取<p>Resolution, format as "width x height", for example 1920x1080</p>
                     * @return Resolution <p>Resolution, format as "width x height", for example 1920x1080</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Resolution, format as "width x height", for example 1920x1080</p>
                     * @param _resolution <p>Resolution, format as "width x height", for example 1920x1080</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>Project type.<br>SHARED: Shared by all applications<br>EXCLUSIVE (default value): Dedicated for one application</p>
                     * @return ProjectType <p>Project type.<br>SHARED: Shared by all applications<br>EXCLUSIVE (default value): Dedicated for one application</p>
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置<p>Project type.<br>SHARED: Shared by all applications<br>EXCLUSIVE (default value): Dedicated for one application</p>
                     * @param _projectType <p>Project type.<br>SHARED: Shared by all applications<br>EXCLUSIVE (default value): Dedicated for one application</p>
                     * 
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>Purpose.<br>EXPERIENCE: Experience</p>
                     * @return Purpose <p>Purpose.<br>EXPERIENCE: Experience</p>
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置<p>Purpose.<br>EXPERIENCE: Experience</p>
                     * @param _purpose <p>Purpose.<br>EXPERIENCE: Experience</p>
                     * 
                     */
                    void SetPurpose(const std::string& _purpose);

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取<p>Application distribution area (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China). Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * @return ApplicationRegions <p>Application distribution area (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China). Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * 
                     */
                    std::vector<std::string> GetApplicationRegions() const;

                    /**
                     * 设置<p>Application distribution area (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China). Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * @param _applicationRegions <p>Application distribution area (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China). Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * 
                     */
                    void SetApplicationRegions(const std::vector<std::string>& _applicationRegions);

                    /**
                     * 判断参数 ApplicationRegions 是否已赋值
                     * @return ApplicationRegions 是否已赋值
                     * 
                     */
                    bool ApplicationRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Concurrent region (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China), Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * @return ConcurrentRegions <p>Concurrent region (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China), Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * 
                     */
                    std::vector<std::string> GetConcurrentRegions() const;

                    /**
                     * 设置<p>Concurrent region (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China), Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * @param _concurrentRegions <p>Concurrent region (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China), Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     * 
                     */
                    void SetConcurrentRegions(const std::vector<std::string>& _concurrentRegions);

                    /**
                     * 判断参数 ConcurrentRegions 是否已赋值
                     * @return ConcurrentRegions 是否已赋值
                     * 
                     */
                    bool ConcurrentRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Project category.<br>DESKTOP: On PC, default value<br>MOBILE: Mobile terminal</p>
                     * @return ProjectCategory <p>Project category.<br>DESKTOP: On PC, default value<br>MOBILE: Mobile terminal</p>
                     * 
                     */
                    std::string GetProjectCategory() const;

                    /**
                     * 设置<p>Project category.<br>DESKTOP: On PC, default value<br>MOBILE: Mobile terminal</p>
                     * @param _projectCategory <p>Project category.<br>DESKTOP: On PC, default value<br>MOBILE: Mobile terminal</p>
                     * 
                     */
                    void SetProjectCategory(const std::string& _projectCategory);

                    /**
                     * 判断参数 ProjectCategory 是否已赋值
                     * @return ProjectCategory 是否已赋值
                     * 
                     */
                    bool ProjectCategoryHasBeenSet() const;

                private:

                    /**
                     * <p>Project ID.</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Project name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Project description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Concurrency type required for project operation.<br>S1: Small-scale cloud application rendering concurrency<br>M1: Medium cloud application rendering concurrency<br>L1: Large cloud application rendering concurrency<br>L2: Large cloud application rendering concurrency<br>XL2: Ultra-large cloud application rendering concurrency<br>MM1_HD: Performance Cloud ARM concurrency - high-definition<br>MM1_FHD: Performance Cloud ARM concurrency - ultra-high-definition</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Cloud Application ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Pre-launch</p>
                     */
                    bool m_isPreload;
                    bool m_isPreloadHasBeenSet;

                    /**
                     * <p>Configured concurrency</p>
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * <p>Number of concurrencies in use</p>
                     */
                    int64_t m_using;
                    bool m_usingHasBeenSet;

                    /**
                     * <p>Application status: NoConcurrent - no concurrency package configured, Online - launched, other statuses are cloud application status: applicationCreating - creating, applicationCreateFail - creation failed, applicationDeleting - deleting, applicationNoConfigured - startup parameter not configured</p>
                     */
                    std::string m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * <p>Application startup parameter</p>
                     */
                    std::string m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Application name</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>Resolution, format as "width x height", for example 1920x1080</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Project type.<br>SHARED: Shared by all applications<br>EXCLUSIVE (default value): Dedicated for one application</p>
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * <p>Purpose.<br>EXPERIENCE: Experience</p>
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * <p>Application distribution area (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China). Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     */
                    std::vector<std::string> m_applicationRegions;
                    bool m_applicationRegionsHasBeenSet;

                    /**
                     * <p>Concurrent region (Standard zone: ap-chinese-mainland: Chinese mainland, na-north-america: North America, eu-frankfurt: Frankfurt, ap-mumbai: Mumbai, ap-tokyo: Tokyo, ap-seoul: Seoul, ap-singapore: Singapore, ap-bangkok: Bangkok, ap-hongkong: Hong Kong (China), Fusion region: me-middle-east-fusion: Middle East, na-north-america-fusion: North America, sa-south-america-fusion: South America, ap-tokyo-fusion: Tokyo, ap-seoul-fusion: Seoul, eu-frankfurt-fusion: Frankfurt, ap-singapore-fusion: Singapore, ap-hongkong-fusion: Hong Kong (China))</p>
                     */
                    std::vector<std::string> m_concurrentRegions;
                    bool m_concurrentRegionsHasBeenSet;

                    /**
                     * <p>Project category.<br>DESKTOP: On PC, default value<br>MOBILE: Mobile terminal</p>
                     */
                    std::string m_projectCategory;
                    bool m_projectCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONPROJECT_H_
