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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_TLOGINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_TLOGINFO_H_

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
                * Alert monitoring data

                */
                class TLogInfo : public AbstractModel
                {
                public:
                    TLogInfo();
                    ~TLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compromised servers
                     * @return OutNum Compromised servers
                     * 
                     */
                    int64_t GetOutNum() const;

                    /**
                     * 设置Compromised servers
                     * @param _outNum Compromised servers
                     * 
                     */
                    void SetOutNum(const int64_t& _outNum);

                    /**
                     * 判断参数 OutNum 是否已赋值
                     * @return OutNum 是否已赋值
                     * 
                     */
                    bool OutNumHasBeenSet() const;

                    /**
                     * 获取Unhandled alerts
                     * @return HandleNum Unhandled alerts
                     * 
                     */
                    int64_t GetHandleNum() const;

                    /**
                     * 设置Unhandled alerts
                     * @param _handleNum Unhandled alerts
                     * 
                     */
                    void SetHandleNum(const int64_t& _handleNum);

                    /**
                     * 判断参数 HandleNum 是否已赋值
                     * @return HandleNum 是否已赋值
                     * 
                     */
                    bool HandleNumHasBeenSet() const;

                    /**
                     * 获取Vulnerability attacks
                     * @return VulNum Vulnerability attacks
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置Vulnerability attacks
                     * @param _vulNum Vulnerability attacks
                     * 
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取Detected networks
                     * @return NetworkNum Detected networks
                     * 
                     */
                    int64_t GetNetworkNum() const;

                    /**
                     * 设置Detected networks
                     * @param _networkNum Detected networks
                     * 
                     */
                    void SetNetworkNum(const int64_t& _networkNum);

                    /**
                     * 判断参数 NetworkNum 是否已赋值
                     * @return NetworkNum 是否已赋值
                     * 
                     */
                    bool NetworkNumHasBeenSet() const;

                    /**
                     * 获取Blocklist
                     * @return BanNum Blocklist
                     * 
                     */
                    int64_t GetBanNum() const;

                    /**
                     * 设置Blocklist
                     * @param _banNum Blocklist
                     * 
                     */
                    void SetBanNum(const int64_t& _banNum);

                    /**
                     * 判断参数 BanNum 是否已赋值
                     * @return BanNum 是否已赋值
                     * 
                     */
                    bool BanNumHasBeenSet() const;

                    /**
                     * 获取Brute force attacks
                     * @return BruteForceNum Brute force attacks
                     * 
                     */
                    int64_t GetBruteForceNum() const;

                    /**
                     * 设置Brute force attacks
                     * @param _bruteForceNum Brute force attacks
                     * 
                     */
                    void SetBruteForceNum(const int64_t& _bruteForceNum);

                    /**
                     * 判断参数 BruteForceNum 是否已赋值
                     * @return BruteForceNum 是否已赋值
                     * 
                     */
                    bool BruteForceNumHasBeenSet() const;

                private:

                    /**
                     * Compromised servers
                     */
                    int64_t m_outNum;
                    bool m_outNumHasBeenSet;

                    /**
                     * Unhandled alerts
                     */
                    int64_t m_handleNum;
                    bool m_handleNumHasBeenSet;

                    /**
                     * Vulnerability attacks
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Detected networks
                     */
                    int64_t m_networkNum;
                    bool m_networkNumHasBeenSet;

                    /**
                     * Blocklist
                     */
                    int64_t m_banNum;
                    bool m_banNumHasBeenSet;

                    /**
                     * Brute force attacks
                     */
                    int64_t m_bruteForceNum;
                    bool m_bruteForceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_TLOGINFO_H_
