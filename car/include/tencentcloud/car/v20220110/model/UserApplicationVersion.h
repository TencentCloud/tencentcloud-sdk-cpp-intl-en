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
                     * 获取<p>Application version Id</p>
                     * @return ApplicationVersionId <p>Application version Id</p>
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置<p>Application version Id</p>
                     * @param _applicationVersionId <p>Application version Id</p>
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
                     * 获取<p>Application version size</p>
                     * @return ApplicationVersionSize <p>Application version size</p>
                     * 
                     */
                    int64_t GetApplicationVersionSize() const;

                    /**
                     * 设置<p>Application version size</p>
                     * @param _applicationVersionSize <p>Application version size</p>
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
                     * 获取<p>Application version status (Uploading: Creating, Creating: Creating, CreateFailed: Failed to create, Deleting: Deleting, Inuse: Current version, Normal: To be released, Usable: Available)</p>
                     * @return ApplicationVersionStatus <p>Application version status (Uploading: Creating, Creating: Creating, CreateFailed: Failed to create, Deleting: Deleting, Inuse: Current version, Normal: To be released, Usable: Available)</p>
                     * 
                     */
                    std::string GetApplicationVersionStatus() const;

                    /**
                     * 设置<p>Application version status (Uploading: Creating, Creating: Creating, CreateFailed: Failed to create, Deleting: Deleting, Inuse: Current version, Normal: To be released, Usable: Available)</p>
                     * @param _applicationVersionStatus <p>Application version status (Uploading: Creating, Creating: Creating, CreateFailed: Failed to create, Deleting: Deleting, Inuse: Current version, Normal: To be released, Usable: Available)</p>
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
                     * 获取<p>Application version name</p>
                     * @return ApplicationVersionName <p>Application version name</p>
                     * 
                     */
                    std::string GetApplicationVersionName() const;

                    /**
                     * 设置<p>Application version name</p>
                     * @param _applicationVersionName <p>Application version name</p>
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
                     * 获取<p>Application version creation time</p>
                     * @return CreateTime <p>Application version creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Application version creation time</p>
                     * @param _createTime <p>Application version creation time</p>
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
                     * 获取<p>Application version distribution regions (<br>Standard regions:<br>ap-chinese-mainland: Chinese mainland,<br>na-north-america: North America,<br>eu-frankfurt: Frankfurt,<br>ap-mumbai: Mumbai,<br>ap-tokyo: Tokyo,<br>ap-seoul: Seoul,<br>ap-singapore: Singapore,<br>ap-bangkok: Bangkok,<br>ap-hongkong: Hong Kong (China),<br>Fusion regions:<br>me-middle-east-fusion: Middle East<br>na-north-america-fusion: North America<br>sa-south-america-fusion: South America<br>ap-tokyo-fusion: Tokyo<br>ap-seoul-fusion: Seoul<br>eu-frankfurt-fusion: Frankfurt<br>ap-singapore-fusion: Singapore<br>ap-hongkong-fusion: Hong Kong (China)<br>)</p>
                     * @return ApplicationVersionRegions <p>Application version distribution regions (<br>Standard regions:<br>ap-chinese-mainland: Chinese mainland,<br>na-north-america: North America,<br>eu-frankfurt: Frankfurt,<br>ap-mumbai: Mumbai,<br>ap-tokyo: Tokyo,<br>ap-seoul: Seoul,<br>ap-singapore: Singapore,<br>ap-bangkok: Bangkok,<br>ap-hongkong: Hong Kong (China),<br>Fusion regions:<br>me-middle-east-fusion: Middle East<br>na-north-america-fusion: North America<br>sa-south-america-fusion: South America<br>ap-tokyo-fusion: Tokyo<br>ap-seoul-fusion: Seoul<br>eu-frankfurt-fusion: Frankfurt<br>ap-singapore-fusion: Singapore<br>ap-hongkong-fusion: Hong Kong (China)<br>)</p>
                     * 
                     */
                    std::vector<std::string> GetApplicationVersionRegions() const;

                    /**
                     * 设置<p>Application version distribution regions (<br>Standard regions:<br>ap-chinese-mainland: Chinese mainland,<br>na-north-america: North America,<br>eu-frankfurt: Frankfurt,<br>ap-mumbai: Mumbai,<br>ap-tokyo: Tokyo,<br>ap-seoul: Seoul,<br>ap-singapore: Singapore,<br>ap-bangkok: Bangkok,<br>ap-hongkong: Hong Kong (China),<br>Fusion regions:<br>me-middle-east-fusion: Middle East<br>na-north-america-fusion: North America<br>sa-south-america-fusion: South America<br>ap-tokyo-fusion: Tokyo<br>ap-seoul-fusion: Seoul<br>eu-frankfurt-fusion: Frankfurt<br>ap-singapore-fusion: Singapore<br>ap-hongkong-fusion: Hong Kong (China)<br>)</p>
                     * @param _applicationVersionRegions <p>Application version distribution regions (<br>Standard regions:<br>ap-chinese-mainland: Chinese mainland,<br>na-north-america: North America,<br>eu-frankfurt: Frankfurt,<br>ap-mumbai: Mumbai,<br>ap-tokyo: Tokyo,<br>ap-seoul: Seoul,<br>ap-singapore: Singapore,<br>ap-bangkok: Bangkok,<br>ap-hongkong: Hong Kong (China),<br>Fusion regions:<br>me-middle-east-fusion: Middle East<br>na-north-america-fusion: North America<br>sa-south-america-fusion: South America<br>ap-tokyo-fusion: Tokyo<br>ap-seoul-fusion: Seoul<br>eu-frankfurt-fusion: Frankfurt<br>ap-singapore-fusion: Singapore<br>ap-hongkong-fusion: Hong Kong (China)<br>)</p>
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
                     * 获取<p>Application version update mode: <br>FULL: Full update, <br>INCREMENT: Incremental update</p>
                     * @return ApplicationVersionUpdateMode <p>Application version update mode: <br>FULL: Full update, <br>INCREMENT: Incremental update</p>
                     * 
                     */
                    std::string GetApplicationVersionUpdateMode() const;

                    /**
                     * 设置<p>Application version update mode: <br>FULL: Full update, <br>INCREMENT: Incremental update</p>
                     * @param _applicationVersionUpdateMode <p>Application version update mode: <br>FULL: Full update, <br>INCREMENT: Incremental update</p>
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
                     * <p>Application version Id</p>
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * <p>Application version size</p>
                     */
                    int64_t m_applicationVersionSize;
                    bool m_applicationVersionSizeHasBeenSet;

                    /**
                     * <p>Application version status (Uploading: Creating, Creating: Creating, CreateFailed: Failed to create, Deleting: Deleting, Inuse: Current version, Normal: To be released, Usable: Available)</p>
                     */
                    std::string m_applicationVersionStatus;
                    bool m_applicationVersionStatusHasBeenSet;

                    /**
                     * <p>Application version name</p>
                     */
                    std::string m_applicationVersionName;
                    bool m_applicationVersionNameHasBeenSet;

                    /**
                     * <p>Application version creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Application version distribution regions (<br>Standard regions:<br>ap-chinese-mainland: Chinese mainland,<br>na-north-america: North America,<br>eu-frankfurt: Frankfurt,<br>ap-mumbai: Mumbai,<br>ap-tokyo: Tokyo,<br>ap-seoul: Seoul,<br>ap-singapore: Singapore,<br>ap-bangkok: Bangkok,<br>ap-hongkong: Hong Kong (China),<br>Fusion regions:<br>me-middle-east-fusion: Middle East<br>na-north-america-fusion: North America<br>sa-south-america-fusion: South America<br>ap-tokyo-fusion: Tokyo<br>ap-seoul-fusion: Seoul<br>eu-frankfurt-fusion: Frankfurt<br>ap-singapore-fusion: Singapore<br>ap-hongkong-fusion: Hong Kong (China)<br>)</p>
                     */
                    std::vector<std::string> m_applicationVersionRegions;
                    bool m_applicationVersionRegionsHasBeenSet;

                    /**
                     * <p>Application version update mode: <br>FULL: Full update, <br>INCREMENT: Incremental update</p>
                     */
                    std::string m_applicationVersionUpdateMode;
                    bool m_applicationVersionUpdateModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONVERSION_H_
