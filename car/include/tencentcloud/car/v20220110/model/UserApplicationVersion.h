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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONVERSION_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONVERSION_H_

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
                * Application version information.
                */
                class UserApplicationVersion : public AbstractModel
                {
                public:
                    UserApplicationVersion();
                    ~UserApplicationVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application version ID.
                     * @return ApplicationVersionId Application version ID.
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置Application version ID.
                     * @param _applicationVersionId Application version ID.
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取Application version size.
                     * @return ApplicationVersionSize Application version size.
                     * 
                     */
                    int64_t GetApplicationVersionSize() const;

                    /**
                     * 设置Application version size.
                     * @param _applicationVersionSize Application version size.
                     * 
                     */
                    void SetApplicationVersionSize(const int64_t& _applicationVersionSize);

                    /**
                     * 判断参数 ApplicationVersionSize 是否已赋值
                     * @return ApplicationVersionSize 是否已赋值
                     * 
                     */
                    bool ApplicationVersionSizeHasBeenSet() const;

                    /**
                     * 获取Application version status (Uploading: uploading; Creating: in creation; CreateFailed: creation failed; Deleting: deleting; Inuse: current version; Normal: to be released; Usable: available).
                     * @return ApplicationVersionStatus Application version status (Uploading: uploading; Creating: in creation; CreateFailed: creation failed; Deleting: deleting; Inuse: current version; Normal: to be released; Usable: available).
                     * 
                     */
                    std::string GetApplicationVersionStatus() const;

                    /**
                     * 设置Application version status (Uploading: uploading; Creating: in creation; CreateFailed: creation failed; Deleting: deleting; Inuse: current version; Normal: to be released; Usable: available).
                     * @param _applicationVersionStatus Application version status (Uploading: uploading; Creating: in creation; CreateFailed: creation failed; Deleting: deleting; Inuse: current version; Normal: to be released; Usable: available).
                     * 
                     */
                    void SetApplicationVersionStatus(const std::string& _applicationVersionStatus);

                    /**
                     * 判断参数 ApplicationVersionStatus 是否已赋值
                     * @return ApplicationVersionStatus 是否已赋值
                     * 
                     */
                    bool ApplicationVersionStatusHasBeenSet() const;

                    /**
                     * 获取Application version name.
                     * @return ApplicationVersionName Application version name.
                     * 
                     */
                    std::string GetApplicationVersionName() const;

                    /**
                     * 设置Application version name.
                     * @param _applicationVersionName Application version name.
                     * 
                     */
                    void SetApplicationVersionName(const std::string& _applicationVersionName);

                    /**
                     * 判断参数 ApplicationVersionName 是否已赋值
                     * @return ApplicationVersionName 是否已赋值
                     * 
                     */
                    bool ApplicationVersionNameHasBeenSet() const;

                    /**
                     * 获取Application version creation time.
                     * @return CreateTime Application version creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Application version creation time.
                     * @param _createTime Application version creation time.
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
                     * 获取Region for application version distribution (
Standard zone:
ap-chinese-mainland: Chinese mainland
na-north-america: North America
eu-frankfurt: Frankfurt
ap-mumbai: Mumbai
ap-tokyo: Tokyo
ap-seoul: Seoul
ap-singapore: Singapore
ap-bangkok: Bangkok
ap-hongkong: Hong Kong (China)
Integration zone:
me-middle-east-fusion: Middle East
na-north-america-fusion: North America
sa-south-america-fusion: South America
ap-tokyo-fusion: Tokyo
ap-seoul-fusion: Seoul
eu-frankfurt-fusion: Frankfurt
ap-singapore-fusion: Singapore
ap-hongkong-fusion: Hong Kong (China)
).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationVersionRegions Region for application version distribution (
Standard zone:
ap-chinese-mainland: Chinese mainland
na-north-america: North America
eu-frankfurt: Frankfurt
ap-mumbai: Mumbai
ap-tokyo: Tokyo
ap-seoul: Seoul
ap-singapore: Singapore
ap-bangkok: Bangkok
ap-hongkong: Hong Kong (China)
Integration zone:
me-middle-east-fusion: Middle East
na-north-america-fusion: North America
sa-south-america-fusion: South America
ap-tokyo-fusion: Tokyo
ap-seoul-fusion: Seoul
eu-frankfurt-fusion: Frankfurt
ap-singapore-fusion: Singapore
ap-hongkong-fusion: Hong Kong (China)
).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetApplicationVersionRegions() const;

                    /**
                     * 设置Region for application version distribution (
Standard zone:
ap-chinese-mainland: Chinese mainland
na-north-america: North America
eu-frankfurt: Frankfurt
ap-mumbai: Mumbai
ap-tokyo: Tokyo
ap-seoul: Seoul
ap-singapore: Singapore
ap-bangkok: Bangkok
ap-hongkong: Hong Kong (China)
Integration zone:
me-middle-east-fusion: Middle East
na-north-america-fusion: North America
sa-south-america-fusion: South America
ap-tokyo-fusion: Tokyo
ap-seoul-fusion: Seoul
eu-frankfurt-fusion: Frankfurt
ap-singapore-fusion: Singapore
ap-hongkong-fusion: Hong Kong (China)
).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationVersionRegions Region for application version distribution (
Standard zone:
ap-chinese-mainland: Chinese mainland
na-north-america: North America
eu-frankfurt: Frankfurt
ap-mumbai: Mumbai
ap-tokyo: Tokyo
ap-seoul: Seoul
ap-singapore: Singapore
ap-bangkok: Bangkok
ap-hongkong: Hong Kong (China)
Integration zone:
me-middle-east-fusion: Middle East
na-north-america-fusion: North America
sa-south-america-fusion: South America
ap-tokyo-fusion: Tokyo
ap-seoul-fusion: Seoul
eu-frankfurt-fusion: Frankfurt
ap-singapore-fusion: Singapore
ap-hongkong-fusion: Hong Kong (China)
).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationVersionRegions(const std::vector<std::string>& _applicationVersionRegions);

                    /**
                     * 判断参数 ApplicationVersionRegions 是否已赋值
                     * @return ApplicationVersionRegions 是否已赋值
                     * 
                     */
                    bool ApplicationVersionRegionsHasBeenSet() const;

                    /**
                     * 获取Application version update method.
FULL: full update.
INCREMENT: incremental update.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationVersionUpdateMode Application version update method.
FULL: full update.
INCREMENT: incremental update.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationVersionUpdateMode() const;

                    /**
                     * 设置Application version update method.
FULL: full update.
INCREMENT: incremental update.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationVersionUpdateMode Application version update method.
FULL: full update.
INCREMENT: incremental update.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationVersionUpdateMode(const std::string& _applicationVersionUpdateMode);

                    /**
                     * 判断参数 ApplicationVersionUpdateMode 是否已赋值
                     * @return ApplicationVersionUpdateMode 是否已赋值
                     * 
                     */
                    bool ApplicationVersionUpdateModeHasBeenSet() const;

                private:

                    /**
                     * Application version ID.
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * Application version size.
                     */
                    int64_t m_applicationVersionSize;
                    bool m_applicationVersionSizeHasBeenSet;

                    /**
                     * Application version status (Uploading: uploading; Creating: in creation; CreateFailed: creation failed; Deleting: deleting; Inuse: current version; Normal: to be released; Usable: available).
                     */
                    std::string m_applicationVersionStatus;
                    bool m_applicationVersionStatusHasBeenSet;

                    /**
                     * Application version name.
                     */
                    std::string m_applicationVersionName;
                    bool m_applicationVersionNameHasBeenSet;

                    /**
                     * Application version creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Region for application version distribution (
Standard zone:
ap-chinese-mainland: Chinese mainland
na-north-america: North America
eu-frankfurt: Frankfurt
ap-mumbai: Mumbai
ap-tokyo: Tokyo
ap-seoul: Seoul
ap-singapore: Singapore
ap-bangkok: Bangkok
ap-hongkong: Hong Kong (China)
Integration zone:
me-middle-east-fusion: Middle East
na-north-america-fusion: North America
sa-south-america-fusion: South America
ap-tokyo-fusion: Tokyo
ap-seoul-fusion: Seoul
eu-frankfurt-fusion: Frankfurt
ap-singapore-fusion: Singapore
ap-hongkong-fusion: Hong Kong (China)
).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationVersionRegions;
                    bool m_applicationVersionRegionsHasBeenSet;

                    /**
                     * Application version update method.
FULL: full update.
INCREMENT: incremental update.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationVersionUpdateMode;
                    bool m_applicationVersionUpdateModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONVERSION_H_
