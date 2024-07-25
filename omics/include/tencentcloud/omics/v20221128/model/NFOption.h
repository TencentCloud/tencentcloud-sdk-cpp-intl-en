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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_NFOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_NFOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Nextflow option
                */
                class NFOption : public AbstractModel
                {
                public:
                    NFOption();
                    ~NFOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Config.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Config Config.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Config.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _config Config.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Profile.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Profile Profile.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置Profile.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _profile Profile.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Report.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Report Report.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetReport() const;

                    /**
                     * 设置Report.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _report Report.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReport(const bool& _report);

                    /**
                     * 判断参数 Report 是否已赋值
                     * @return Report 是否已赋值
                     * 
                     */
                    bool ReportHasBeenSet() const;

                    /**
                     * 获取Resume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resume Resume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetResume() const;

                    /**
                     * 设置Resume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resume Resume.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResume(const bool& _resume);

                    /**
                     * 判断参数 Resume 是否已赋值
                     * @return Resume 是否已赋值
                     * 
                     */
                    bool ResumeHasBeenSet() const;

                    /**
                     * 获取Nextflow engine version. Valid values:
- 22.10.4
- 22.10.8 
- 23.10.1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NFVersion Nextflow engine version. Valid values:
- 22.10.4
- 22.10.8 
- 23.10.1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNFVersion() const;

                    /**
                     * 设置Nextflow engine version. Valid values:
- 22.10.4
- 22.10.8 
- 23.10.1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nFVersion Nextflow engine version. Valid values:
- 22.10.4
- 22.10.8 
- 23.10.1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNFVersion(const std::string& _nFVersion);

                    /**
                     * 判断参数 NFVersion 是否已赋值
                     * @return NFVersion 是否已赋值
                     * 
                     */
                    bool NFVersionHasBeenSet() const;

                private:

                    /**
                     * Config.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Profile.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Report.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_report;
                    bool m_reportHasBeenSet;

                    /**
                     * Resume.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_resume;
                    bool m_resumeHasBeenSet;

                    /**
                     * Nextflow engine version. Valid values:
- 22.10.4
- 22.10.8 
- 23.10.1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nFVersion;
                    bool m_nFVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_NFOPTION_H_
