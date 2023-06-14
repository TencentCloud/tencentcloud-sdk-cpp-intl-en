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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORYINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Service release list details
                */
                class ServiceReleaseHistoryInfo : public AbstractModel
                {
                public:
                    ServiceReleaseHistoryInfo();
                    ~ServiceReleaseHistoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VersionName Version ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _versionName Version ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Version description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VersionDesc Version description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置Version description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _versionDesc Version description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取Version release time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ReleaseTime Version release time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置Version release time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _releaseTime Version release time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                private:

                    /**
                     * Version ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Version description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * Version release time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORYINFO_H_
