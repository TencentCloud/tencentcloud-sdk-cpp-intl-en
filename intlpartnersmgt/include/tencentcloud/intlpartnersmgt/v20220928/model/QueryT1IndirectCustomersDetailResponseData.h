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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILRESPONSEDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILRESPONSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Query data of indirect sub-customers of a first-level distributor.

Callable roles: Distributor
                */
                class QueryT1IndirectCustomersDetailResponseData : public AbstractModel
                {
                public:
                    QueryT1IndirectCustomersDetailResponseData();
                    ~QueryT1IndirectCustomersDetailResponseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Customer uin.
                     * @return ClientUin Customer uin.
                     * 
                     */
                    int64_t GetClientUin() const;

                    /**
                     * 设置Customer uin.
                     * @param _clientUin Customer uin.
                     * 
                     */
                    void SetClientUin(const int64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取Customer name.
                     * @return ClientName Customer name.
                     * 
                     */
                    std::string GetClientName() const;

                    /**
                     * 设置Customer name.
                     * @param _clientName Customer name.
                     * 
                     */
                    void SetClientName(const std::string& _clientName);

                    /**
                     * 判断参数 ClientName 是否已赋值
                     * @return ClientName 是否已赋值
                     * 
                     */
                    bool ClientNameHasBeenSet() const;

                    /**
                     * 获取The time when a sub-customer binds a second-level reseller, time zone: UTC+08:00.
                     * @return ClientBindTime The time when a sub-customer binds a second-level reseller, time zone: UTC+08:00.
                     * 
                     */
                    std::string GetClientBindTime() const;

                    /**
                     * 设置The time when a sub-customer binds a second-level reseller, time zone: UTC+08:00.
                     * @param _clientBindTime The time when a sub-customer binds a second-level reseller, time zone: UTC+08:00.
                     * 
                     */
                    void SetClientBindTime(const std::string& _clientBindTime);

                    /**
                     * 判断参数 ClientBindTime 是否已赋值
                     * @return ClientBindTime 是否已赋值
                     * 
                     */
                    bool ClientBindTimeHasBeenSet() const;

                private:

                    /**
                     * Customer uin.
                     */
                    int64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Customer name.
                     */
                    std::string m_clientName;
                    bool m_clientNameHasBeenSet;

                    /**
                     * The time when a sub-customer binds a second-level reseller, time zone: UTC+08:00.
                     */
                    std::string m_clientBindTime;
                    bool m_clientBindTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYT1INDIRECTCUSTOMERSDETAILRESPONSEDATA_H_
