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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_APPLYINTERNETADDRESSREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_APPLYINTERNETADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * ApplyInternetAddress request structure.
                */
                class ApplyInternetAddressRequest : public AbstractModel
                {
                public:
                    ApplyInternetAddressRequest();
                    ~ApplyInternetAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mask length of a CIDR block
                     * @return MaskLen Mask length of a CIDR block
                     * 
                     */
                    int64_t GetMaskLen() const;

                    /**
                     * 设置Mask length of a CIDR block
                     * @param _maskLen Mask length of a CIDR block
                     * 
                     */
                    void SetMaskLen(const int64_t& _maskLen);

                    /**
                     * 判断参数 MaskLen 是否已赋值
                     * @return MaskLen 是否已赋值
                     * 
                     */
                    bool MaskLenHasBeenSet() const;

                    /**
                     * 获取Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
                     * @return AddrType Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
                     * 
                     */
                    int64_t GetAddrType() const;

                    /**
                     * 设置Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
                     * @param _addrType Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
                     * 
                     */
                    void SetAddrType(const int64_t& _addrType);

                    /**
                     * 判断参数 AddrType 是否已赋值
                     * @return AddrType 是否已赋值
                     * 
                     */
                    bool AddrTypeHasBeenSet() const;

                    /**
                     * 获取Address protocol. Valid values: 0: IPv4
1: IPv6
                     * @return AddrProto Address protocol. Valid values: 0: IPv4
1: IPv6
                     * 
                     */
                    int64_t GetAddrProto() const;

                    /**
                     * 设置Address protocol. Valid values: 0: IPv4
1: IPv6
                     * @param _addrProto Address protocol. Valid values: 0: IPv4
1: IPv6
                     * 
                     */
                    void SetAddrProto(const int64_t& _addrProto);

                    /**
                     * 判断参数 AddrProto 是否已赋值
                     * @return AddrProto 是否已赋值
                     * 
                     */
                    bool AddrProtoHasBeenSet() const;

                private:

                    /**
                     * Mask length of a CIDR block
                     */
                    int64_t m_maskLen;
                    bool m_maskLenHasBeenSet;

                    /**
                     * Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
                     */
                    int64_t m_addrType;
                    bool m_addrTypeHasBeenSet;

                    /**
                     * Address protocol. Valid values: 0: IPv4
1: IPv6
                     */
                    int64_t m_addrProto;
                    bool m_addrProtoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_APPLYINTERNETADDRESSREQUEST_H_
