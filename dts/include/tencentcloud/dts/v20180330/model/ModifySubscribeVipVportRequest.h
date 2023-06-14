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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEVIPVPORTREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEVIPVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySubscribeVipVport request structure.
                */
                class ModifySubscribeVipVportRequest : public AbstractModel
                {
                public:
                    ModifySubscribeVipVportRequest();
                    ~ModifySubscribeVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Specified destination subnet. If this parameter is passed in, `DstIp` must be in the destination subnet
                     * @return DstUniqSubnetId Specified destination subnet. If this parameter is passed in, `DstIp` must be in the destination subnet
                     * 
                     */
                    std::string GetDstUniqSubnetId() const;

                    /**
                     * 设置Specified destination subnet. If this parameter is passed in, `DstIp` must be in the destination subnet
                     * @param _dstUniqSubnetId Specified destination subnet. If this parameter is passed in, `DstIp` must be in the destination subnet
                     * 
                     */
                    void SetDstUniqSubnetId(const std::string& _dstUniqSubnetId);

                    /**
                     * 判断参数 DstUniqSubnetId 是否已赋值
                     * @return DstUniqSubnetId 是否已赋值
                     * 
                     */
                    bool DstUniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Target IP. Either this field or `DstPort` must be passed in
                     * @return DstIp Target IP. Either this field or `DstPort` must be passed in
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Target IP. Either this field or `DstPort` must be passed in
                     * @param _dstIp Target IP. Either this field or `DstPort` must be passed in
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取Target port. Value range: [1025-65535]
                     * @return DstPort Target port. Value range: [1025-65535]
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置Target port. Value range: [1025-65535]
                     * @param _dstPort Target port. Value range: [1025-65535]
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Specified destination subnet. If this parameter is passed in, `DstIp` must be in the destination subnet
                     */
                    std::string m_dstUniqSubnetId;
                    bool m_dstUniqSubnetIdHasBeenSet;

                    /**
                     * Target IP. Either this field or `DstPort` must be passed in
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Target port. Value range: [1025-65535]
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEVIPVPORTREQUEST_H_
