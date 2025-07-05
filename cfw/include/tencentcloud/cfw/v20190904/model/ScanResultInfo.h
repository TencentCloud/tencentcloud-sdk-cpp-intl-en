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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SCANRESULTINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SCANRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Getting started on scanning result information PortNum   int
	LeakNum   int
	IPNum     int
	IPStatus  bool
	IdpStatus bool
	BanStatus bool
                */
                class ScanResultInfo : public AbstractModel
                {
                public:
                    ScanResultInfo();
                    ~ScanResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of vulnerability exploits
                     * @return LeakNum Number of vulnerability exploits
                     * 
                     */
                    uint64_t GetLeakNum() const;

                    /**
                     * 设置Number of vulnerability exploits
                     * @param _leakNum Number of vulnerability exploits
                     * 
                     */
                    void SetLeakNum(const uint64_t& _leakNum);

                    /**
                     * 判断参数 LeakNum 是否已赋值
                     * @return LeakNum 是否已赋值
                     * 
                     */
                    bool LeakNumHasBeenSet() const;

                    /**
                     * 获取Number of protected IPs
                     * @return IPNum Number of protected IPs
                     * 
                     */
                    uint64_t GetIPNum() const;

                    /**
                     * 设置Number of protected IPs
                     * @param _iPNum Number of protected IPs
                     * 
                     */
                    void SetIPNum(const uint64_t& _iPNum);

                    /**
                     * 判断参数 IPNum 是否已赋值
                     * @return IPNum 是否已赋值
                     * 
                     */
                    bool IPNumHasBeenSet() const;

                    /**
                     * 获取Number of exposed ports
                     * @return PortNum Number of exposed ports
                     * 
                     */
                    uint64_t GetPortNum() const;

                    /**
                     * 设置Number of exposed ports
                     * @param _portNum Number of exposed ports
                     * 
                     */
                    void SetPortNum(const uint64_t& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     * 
                     */
                    bool PortNumHasBeenSet() const;

                    /**
                     * 获取Protection status
                     * @return IPStatus Protection status
                     * 
                     */
                    bool GetIPStatus() const;

                    /**
                     * 设置Protection status
                     * @param _iPStatus Protection status
                     * 
                     */
                    void SetIPStatus(const bool& _iPStatus);

                    /**
                     * 判断参数 IPStatus 是否已赋值
                     * @return IPStatus 是否已赋值
                     * 
                     */
                    bool IPStatusHasBeenSet() const;

                    /**
                     * 获取Attack blocking status
                     * @return IdpStatus Attack blocking status
                     * 
                     */
                    bool GetIdpStatus() const;

                    /**
                     * 设置Attack blocking status
                     * @param _idpStatus Attack blocking status
                     * 
                     */
                    void SetIdpStatus(const bool& _idpStatus);

                    /**
                     * 判断参数 IdpStatus 是否已赋值
                     * @return IdpStatus 是否已赋值
                     * 
                     */
                    bool IdpStatusHasBeenSet() const;

                    /**
                     * 获取Port blocking status
                     * @return BanStatus Port blocking status
                     * 
                     */
                    bool GetBanStatus() const;

                    /**
                     * 设置Port blocking status
                     * @param _banStatus Port blocking status
                     * 
                     */
                    void SetBanStatus(const bool& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                private:

                    /**
                     * Number of vulnerability exploits
                     */
                    uint64_t m_leakNum;
                    bool m_leakNumHasBeenSet;

                    /**
                     * Number of protected IPs
                     */
                    uint64_t m_iPNum;
                    bool m_iPNumHasBeenSet;

                    /**
                     * Number of exposed ports
                     */
                    uint64_t m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * Protection status
                     */
                    bool m_iPStatus;
                    bool m_iPStatusHasBeenSet;

                    /**
                     * Attack blocking status
                     */
                    bool m_idpStatus;
                    bool m_idpStatusHasBeenSet;

                    /**
                     * Port blocking status
                     */
                    bool m_banStatus;
                    bool m_banStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SCANRESULTINFO_H_
