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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERRELATEDDIRINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERRELATEDDIRINFORESPONSE_H_

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
                * DescribeServerRelatedDirInfo response structure.
                */
                class DescribeServerRelatedDirInfoResponse : public AbstractModel
                {
                public:
                    DescribeServerRelatedDirInfoResponse();
                    ~DescribeServerRelatedDirInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP address
                     * @return HostIp Server IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Number of protection directories
                     * @return ProtectDirNum Number of protection directories
                     * 
                     */
                    uint64_t GetProtectDirNum() const;

                    /**
                     * 判断参数 ProtectDirNum 是否已赋值
                     * @return ProtectDirNum 是否已赋值
                     * 
                     */
                    bool ProtectDirNumHasBeenSet() const;

                    /**
                     * 获取Number of protected files
                     * @return ProtectFileNum Number of protected files
                     * 
                     */
                    uint64_t GetProtectFileNum() const;

                    /**
                     * 判断参数 ProtectFileNum 是否已赋值
                     * @return ProtectFileNum 是否已赋值
                     * 
                     */
                    bool ProtectFileNumHasBeenSet() const;

                    /**
                     * 获取Number of tamper-proof entries
                     * @return ProtectTamperNum Number of tamper-proof entries
                     * 
                     */
                    uint64_t GetProtectTamperNum() const;

                    /**
                     * 判断参数 ProtectTamperNum 是否已赋值
                     * @return ProtectTamperNum 是否已赋值
                     * 
                     */
                    bool ProtectTamperNumHasBeenSet() const;

                    /**
                     * 获取Number of protected soft links
                     * @return ProtectLinkNum Number of protected soft links
                     * 
                     */
                    uint64_t GetProtectLinkNum() const;

                    /**
                     * 判断参数 ProtectLinkNum 是否已赋值
                     * @return ProtectLinkNum 是否已赋值
                     * 
                     */
                    bool ProtectLinkNumHasBeenSet() const;

                private:

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Number of protection directories
                     */
                    uint64_t m_protectDirNum;
                    bool m_protectDirNumHasBeenSet;

                    /**
                     * Number of protected files
                     */
                    uint64_t m_protectFileNum;
                    bool m_protectFileNumHasBeenSet;

                    /**
                     * Number of tamper-proof entries
                     */
                    uint64_t m_protectTamperNum;
                    bool m_protectTamperNumHasBeenSet;

                    /**
                     * Number of protected soft links
                     */
                    uint64_t m_protectLinkNum;
                    bool m_protectLinkNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERRELATEDDIRINFORESPONSE_H_
