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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENTSTRATEGY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENTSTRATEGY_H_

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
                * Environment throttling
                */
                class EnvironmentStrategy : public AbstractModel
                {
                public:
                    EnvironmentStrategy();
                    ~EnvironmentStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment name
                     * @return EnvironmentName Environment name
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
                     * @param _environmentName Environment name
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Throttling value
                     * @return Quota Throttling value
                     * 
                     */
                    int64_t GetQuota() const;

                    /**
                     * 设置Throttling value
                     * @param _quota Throttling value
                     * 
                     */
                    void SetQuota(const int64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * Environment name
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Throttling value
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENTSTRATEGY_H_
