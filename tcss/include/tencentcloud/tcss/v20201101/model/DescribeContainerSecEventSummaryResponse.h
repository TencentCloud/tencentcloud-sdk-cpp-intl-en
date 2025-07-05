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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERSECEVENTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERSECEVENTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeContainerSecEventSummary response structure.
                */
                class DescribeContainerSecEventSummaryResponse : public AbstractModel
                {
                public:
                    DescribeContainerSecEventSummaryResponse();
                    ~DescribeContainerSecEventSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Pending escape event
                     * @return UnhandledEscapeCnt Pending escape event
                     * 
                     */
                    uint64_t GetUnhandledEscapeCnt() const;

                    /**
                     * 判断参数 UnhandledEscapeCnt 是否已赋值
                     * @return UnhandledEscapeCnt 是否已赋值
                     * 
                     */
                    bool UnhandledEscapeCntHasBeenSet() const;

                    /**
                     * 获取Pending reverse shell event
                     * @return UnhandledReverseShellCnt Pending reverse shell event
                     * 
                     */
                    uint64_t GetUnhandledReverseShellCnt() const;

                    /**
                     * 判断参数 UnhandledReverseShellCnt 是否已赋值
                     * @return UnhandledReverseShellCnt 是否已赋值
                     * 
                     */
                    bool UnhandledReverseShellCntHasBeenSet() const;

                    /**
                     * 获取Pending high-risk syscall
                     * @return UnhandledRiskSyscallCnt Pending high-risk syscall
                     * 
                     */
                    uint64_t GetUnhandledRiskSyscallCnt() const;

                    /**
                     * 判断参数 UnhandledRiskSyscallCnt 是否已赋值
                     * @return UnhandledRiskSyscallCnt 是否已赋值
                     * 
                     */
                    bool UnhandledRiskSyscallCntHasBeenSet() const;

                    /**
                     * 获取Pending abnormal process
                     * @return UnhandledAbnormalProcessCnt Pending abnormal process
                     * 
                     */
                    uint64_t GetUnhandledAbnormalProcessCnt() const;

                    /**
                     * 判断参数 UnhandledAbnormalProcessCnt 是否已赋值
                     * @return UnhandledAbnormalProcessCnt 是否已赋值
                     * 
                     */
                    bool UnhandledAbnormalProcessCntHasBeenSet() const;

                    /**
                     * 获取Pending file tampering event
                     * @return UnhandledFileCnt Pending file tampering event
                     * 
                     */
                    uint64_t GetUnhandledFileCnt() const;

                    /**
                     * 判断参数 UnhandledFileCnt 是否已赋值
                     * @return UnhandledFileCnt 是否已赋值
                     * 
                     */
                    bool UnhandledFileCntHasBeenSet() const;

                    /**
                     * 获取Pending trojan event
                     * @return UnhandledVirusEventCnt Pending trojan event
                     * 
                     */
                    uint64_t GetUnhandledVirusEventCnt() const;

                    /**
                     * 判断参数 UnhandledVirusEventCnt 是否已赋值
                     * @return UnhandledVirusEventCnt 是否已赋值
                     * 
                     */
                    bool UnhandledVirusEventCntHasBeenSet() const;

                    /**
                     * 获取Unhandled malicious outgoing connections
                     * @return UnhandledMaliciousConnectionEventCnt Unhandled malicious outgoing connections
                     * 
                     */
                    uint64_t GetUnhandledMaliciousConnectionEventCnt() const;

                    /**
                     * 判断参数 UnhandledMaliciousConnectionEventCnt 是否已赋值
                     * @return UnhandledMaliciousConnectionEventCnt 是否已赋值
                     * 
                     */
                    bool UnhandledMaliciousConnectionEventCntHasBeenSet() const;

                    /**
                     * 获取Unhandled K8sApi events
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UnhandledK8sApiEventCnt Unhandled K8sApi events
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetUnhandledK8sApiEventCnt() const;

                    /**
                     * 判断参数 UnhandledK8sApiEventCnt 是否已赋值
                     * @return UnhandledK8sApiEventCnt 是否已赋值
                     * 
                     */
                    bool UnhandledK8sApiEventCntHasBeenSet() const;

                private:

                    /**
                     * Pending escape event
                     */
                    uint64_t m_unhandledEscapeCnt;
                    bool m_unhandledEscapeCntHasBeenSet;

                    /**
                     * Pending reverse shell event
                     */
                    uint64_t m_unhandledReverseShellCnt;
                    bool m_unhandledReverseShellCntHasBeenSet;

                    /**
                     * Pending high-risk syscall
                     */
                    uint64_t m_unhandledRiskSyscallCnt;
                    bool m_unhandledRiskSyscallCntHasBeenSet;

                    /**
                     * Pending abnormal process
                     */
                    uint64_t m_unhandledAbnormalProcessCnt;
                    bool m_unhandledAbnormalProcessCntHasBeenSet;

                    /**
                     * Pending file tampering event
                     */
                    uint64_t m_unhandledFileCnt;
                    bool m_unhandledFileCntHasBeenSet;

                    /**
                     * Pending trojan event
                     */
                    uint64_t m_unhandledVirusEventCnt;
                    bool m_unhandledVirusEventCntHasBeenSet;

                    /**
                     * Unhandled malicious outgoing connections
                     */
                    uint64_t m_unhandledMaliciousConnectionEventCnt;
                    bool m_unhandledMaliciousConnectionEventCntHasBeenSet;

                    /**
                     * Unhandled K8sApi events
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_unhandledK8sApiEventCnt;
                    bool m_unhandledK8sApiEventCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERSECEVENTSUMMARYRESPONSE_H_
