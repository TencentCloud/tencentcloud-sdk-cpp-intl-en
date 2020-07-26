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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSCHARGEPREPAID_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * EIP cost object
                */
                class AddressChargePrepaid : public AbstractModel
                {
                public:
                    AddressChargePrepaid();
                    ~AddressChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purchase duration of instance
                     * @return Period Purchase duration of instance
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration of instance
                     * @param Period Purchase duration of instance
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether auto-renewal is enabled
                     * @return RenewFlag Whether auto-renewal is enabled
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Whether auto-renewal is enabled
                     * @param RenewFlag Whether auto-renewal is enabled
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Purchase duration of instance
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether auto-renewal is enabled
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSCHARGEPREPAID_H_
