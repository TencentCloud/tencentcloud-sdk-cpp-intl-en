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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETENONLOCALLOGINPLACESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETENONLOCALLOGINPLACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteNonlocalLoginPlaces request structure.
                */
                class DeleteNonlocalLoginPlacesRequest : public AbstractModel
                {
                public:
                    DeleteNonlocalLoginPlacesRequest();
                    ~DeleteNonlocalLoginPlacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Method for deleting cross-region log-in events, available values are Ids, Ip, and All. The default is Ids.
                     * @return DelType Method for deleting cross-region log-in events, available values are Ids, Ip, and All. The default is Ids.
                     * 
                     */
                    std::string GetDelType() const;

                    /**
                     * 设置Method for deleting cross-region log-in events, available values are Ids, Ip, and All. The default is Ids.
                     * @param _delType Method for deleting cross-region log-in events, available values are Ids, Ip, and All. The default is Ids.
                     * 
                     */
                    void SetDelType(const std::string& _delType);

                    /**
                     * 判断参数 DelType 是否已赋值
                     * @return DelType 是否已赋值
                     * 
                     */
                    bool DelTypeHasBeenSet() const;

                    /**
                     * 获取Array of cross-region log-in event IDs. Required if DelType is Ids or DelType is not filled.
                     * @return Ids Array of cross-region log-in event IDs. Required if DelType is Ids or DelType is not filled.
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置Array of cross-region log-in event IDs. Required if DelType is Ids or DelType is not filled.
                     * @param _ids Array of cross-region log-in event IDs. Required if DelType is Ids or DelType is not filled.
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取IP of cross-region log-in event. Required if DelType is Ip.
                     * @return Ip IP of cross-region log-in event. Required if DelType is Ip.
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置IP of cross-region log-in event. Required if DelType is Ip.
                     * @param _ip IP of cross-region log-in event. Required if DelType is Ip.
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * Method for deleting cross-region log-in events, available values are Ids, Ip, and All. The default is Ids.
                     */
                    std::string m_delType;
                    bool m_delTypeHasBeenSet;

                    /**
                     * Array of cross-region log-in event IDs. Required if DelType is Ids or DelType is not filled.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * IP of cross-region log-in event. Required if DelType is Ip.
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETENONLOCALLOGINPLACESREQUEST_H_
