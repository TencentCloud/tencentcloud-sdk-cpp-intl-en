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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * QueryVoucherListByUin request structure.
                */
                class QueryVoucherListByUinRequest : public AbstractModel
                {
                public:
                    QueryVoucherListByUinRequest();
                    ~QueryVoucherListByUinRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of customer UIN. Array length value:1-20.
                     * @return ClientUins List of customer UIN. Array length value:1-20.
                     * 
                     */
                    std::vector<uint64_t> GetClientUins() const;

                    /**
                     * 设置List of customer UIN. Array length value:1-20.
                     * @param _clientUins List of customer UIN. Array length value:1-20.
                     * 
                     */
                    void SetClientUins(const std::vector<uint64_t>& _clientUins);

                    /**
                     * 判断参数 ClientUins 是否已赋值
                     * @return ClientUins 是否已赋值
                     * 
                     */
                    bool ClientUinsHasBeenSet() const;

                    /**
                     * 获取Voucher status. If this parameter is not passed in, all status will be queried by default. Valid values: `Unused`, `Used`, `Expired`.
                     * @return Status Voucher status. If this parameter is not passed in, all status will be queried by default. Valid values: `Unused`, `Used`, `Expired`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Voucher status. If this parameter is not passed in, all status will be queried by default. Valid values: `Unused`, `Used`, `Expired`.
                     * @param _status Voucher status. If this parameter is not passed in, all status will be queried by default. Valid values: `Unused`, `Used`, `Expired`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * List of customer UIN. Array length value:1-20.
                     */
                    std::vector<uint64_t> m_clientUins;
                    bool m_clientUinsHasBeenSet;

                    /**
                     * Voucher status. If this parameter is not passed in, all status will be queried by default. Valid values: `Unused`, `Used`, `Expired`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINREQUEST_H_
