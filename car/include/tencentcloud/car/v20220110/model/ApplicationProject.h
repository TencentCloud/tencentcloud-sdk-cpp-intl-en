/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Project name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Project name.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project description.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Project description.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Project description.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Project description.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud application ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Cloud application ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Cloud application ID.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId Cloud application ID.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPreload Pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPreload() const;

                    /**
                     * 设置Pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPreload Pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of concurrencies already configured.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Amount Number of concurrencies already configured.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置Number of concurrencies already configured.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _amount Number of concurrencies already configured.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of concurrencies in use.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Using Number of concurrencies in use.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUsing() const;

                    /**
                     * 设置Number of concurrencies in use.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _using Number of concurrencies in use.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application status. NoConcurrent: no concurrency pack configured; Online: activated. Cloud application status: applicationCreating: creating; applicationCreateFail: creation failed; applicationDeleting: deleting; applicationNoConfigured: startup parameters not configured.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationStatus Application status. NoConcurrent: no concurrency pack configured; Online: activated. Cloud application status: applicationCreating: creating; applicationCreateFail: creation failed; applicationDeleting: deleting; applicationNoConfigured: startup parameters not configured.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationStatus() const;

                    /**
                     * 设置Application status. NoConcurrent: no concurrency pack configured; Online: activated. Cloud application status: applicationCreating: creating; applicationCreateFail: creation failed; applicationDeleting: deleting; applicationNoConfigured: startup parameters not configured.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationStatus Application status. NoConcurrent: no concurrency pack configured; Online: activated. Cloud application status: applicationCreating: creating; applicationCreateFail: creation failed; applicationDeleting: deleting; applicationNoConfigured: startup parameters not configured.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationParams Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationParams() const;

                    /**
                     * 设置Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationParams Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resolution Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resolution Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectType Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectType Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Purpose.EXPERIENCE: Experience.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Purpose Purpose.EXPERIENCE: Experience.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 设置Purpose.EXPERIENCE: Experience.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _purpose Purpose.EXPERIENCE: Experience.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application distribution area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationRegions Application distribution area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetApplicationRegions() const;

                    /**
                     * 设置Application distribution area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationRegions Application distribution area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Concurrency area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConcurrentRegions Concurrency area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetConcurrentRegions() const;

                    /**
                     * 设置Concurrency area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _concurrentRegions Concurrency area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Project category.DESKTOP: desktop (default value).MOBILE: mobile.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectCategory Project category.DESKTOP: desktop (default value).MOBILE: mobile.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectCategory() const;

                    /**
                     * 设置Project category.DESKTOP: desktop (default value).MOBILE: mobile.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectCategory Project category.DESKTOP: desktop (default value).MOBILE: mobile.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Project ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project description.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Concurrency type required for project operation.S1: concurrency for rendering small cloud applications.M1: concurrency for rendering medium cloud applications.L1: concurrency for rendering large cloud applications.L2: concurrency for rendering large cloud applications.XL2: concurrency for rendering extra large cloud applications.MM1_HD: concurrency for performance-based cloud ARM (HD).MM1_FHD: concurrency for performance-based cloud ARM (FHD).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cloud application ID.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Pre-launch.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPreload;
                    bool m_isPreloadHasBeenSet;

                    /**
                     * Number of concurrencies already configured.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * Number of concurrencies in use.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_using;
                    bool m_usingHasBeenSet;

                    /**
                     * Application status. NoConcurrent: no concurrency pack configured; Online: activated. Cloud application status: applicationCreating: creating; applicationCreateFail: creation failed; applicationDeleting: deleting; applicationNoConfigured: startup parameters not configured.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * Application startup parameters.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Application name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Resolution, in the format of widthxheight, such as 1920x1080.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * Project type.SHARED: shared by all applications.EXCLUSIVE (default value): dedicated for one application.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * Purpose.EXPERIENCE: Experience.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * Application distribution area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationRegions;
                    bool m_applicationRegionsHasBeenSet;

                    /**
                     * Concurrency area. Standard areas are as follows. ap-chinese-mainland: Chinese mainland; na-north-america: North America; eu-frankfurt: Frankfurt; ap-mumbai: Mumbai; ap-tokyo: Tokyo; ap-seoul: Seoul; ap-singapore: Singapore; ap-bangkok: Bangkok; ap-hongkong: Hong Kong (China). Fusion areas are as follows. me-middle-east-fusion: Middle East; na-north-america-fusion: North America; sa-south-america-fusion: South America; ap-tokyo-fusion: Tokyo; ap-seoul-fusion: Seoul; eu-frankfurt-fusion: Frankfurt; ap-singapore-fusion: Singapore; ap-hongkong-fusion: Hong Kong (China).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_concurrentRegions;
                    bool m_concurrentRegionsHasBeenSet;

                    /**
                     * Project category.DESKTOP: desktop (default value).MOBILE: mobile.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectCategory;
                    bool m_projectCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_APPLICATIONPROJECT_H_
