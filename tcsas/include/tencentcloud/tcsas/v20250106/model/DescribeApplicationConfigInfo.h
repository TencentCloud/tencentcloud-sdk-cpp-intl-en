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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONCONFIGINFO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/ApplicationConfigInfo.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response data for retrieving superapp configuration information
                */
                class DescribeApplicationConfigInfo : public AbstractModel
                {
                public:
                    DescribeApplicationConfigInfo();
                    ~DescribeApplicationConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Android configuration list
                     * @return AndroidConfig Android configuration list
                     * 
                     */
                    std::vector<ApplicationConfigInfo> GetAndroidConfig() const;

                    /**
                     * 设置Android configuration list
                     * @param _androidConfig Android configuration list
                     * 
                     */
                    void SetAndroidConfig(const std::vector<ApplicationConfigInfo>& _androidConfig);

                    /**
                     * 判断参数 AndroidConfig 是否已赋值
                     * @return AndroidConfig 是否已赋值
                     * 
                     */
                    bool AndroidConfigHasBeenSet() const;

                    /**
                     * 获取iOS configuration list
                     * @return IosConfig iOS configuration list
                     * 
                     */
                    std::vector<ApplicationConfigInfo> GetIosConfig() const;

                    /**
                     * 设置iOS configuration list
                     * @param _iosConfig iOS configuration list
                     * 
                     */
                    void SetIosConfig(const std::vector<ApplicationConfigInfo>& _iosConfig);

                    /**
                     * 判断参数 IosConfig 是否已赋值
                     * @return IosConfig 是否已赋值
                     * 
                     */
                    bool IosConfigHasBeenSet() const;

                private:

                    /**
                     * Android configuration list
                     */
                    std::vector<ApplicationConfigInfo> m_androidConfig;
                    bool m_androidConfigHasBeenSet;

                    /**
                     * iOS configuration list
                     */
                    std::vector<ApplicationConfigInfo> m_iosConfig;
                    bool m_iosConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONCONFIGINFO_H_
