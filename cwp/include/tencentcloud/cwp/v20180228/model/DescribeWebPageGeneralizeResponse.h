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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEGENERALIZERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEGENERALIZERESPONSE_H_

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
                * DescribeWebPageGeneralize response structure.
                */
                class DescribeWebPageGeneralizeResponse : public AbstractModel
                {
                public:
                    DescribeWebPageGeneralizeResponse();
                    ~DescribeWebPageGeneralizeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Protection monitoring. 0: not enabled. 1: on. 2: exception.
                     * @return ProtectMonitor Protection monitoring. 0: not enabled. 1: on. 2: exception.
                     * 
                     */
                    uint64_t GetProtectMonitor() const;

                    /**
                     * 判断参数 ProtectMonitor 是否已赋值
                     * @return ProtectMonitor 是否已赋值
                     * 
                     */
                    bool ProtectMonitorHasBeenSet() const;

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
                     * 获取Number of tampered files
                     * @return TamperFileNum Number of tampered files
                     * 
                     */
                    uint64_t GetTamperFileNum() const;

                    /**
                     * 判断参数 TamperFileNum 是否已赋值
                     * @return TamperFileNum 是否已赋值
                     * 
                     */
                    bool TamperFileNumHasBeenSet() const;

                    /**
                     * 获取Number of tampered items
                     * @return TamperNum Number of tampered items
                     * 
                     */
                    uint64_t GetTamperNum() const;

                    /**
                     * 判断参数 TamperNum 是否已赋值
                     * @return TamperNum 是否已赋值
                     * 
                     */
                    bool TamperNumHasBeenSet() const;

                    /**
                     * 获取Today's protection count
                     * @return ProtectToday Today's protection count
                     * 
                     */
                    uint64_t GetProtectToday() const;

                    /**
                     * 判断参数 ProtectToday 是否已赋值
                     * @return ProtectToday 是否已赋值
                     * 
                     */
                    bool ProtectTodayHasBeenSet() const;

                    /**
                     * 获取Number of protected hosts
                     * @return ProtectHostNum Number of protected hosts
                     * 
                     */
                    uint64_t GetProtectHostNum() const;

                    /**
                     * 判断参数 ProtectHostNum 是否已赋值
                     * @return ProtectHostNum 是否已赋值
                     * 
                     */
                    bool ProtectHostNumHasBeenSet() const;

                private:

                    /**
                     * Protection monitoring. 0: not enabled. 1: on. 2: exception.
                     */
                    uint64_t m_protectMonitor;
                    bool m_protectMonitorHasBeenSet;

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
                     * Number of tampered files
                     */
                    uint64_t m_tamperFileNum;
                    bool m_tamperFileNumHasBeenSet;

                    /**
                     * Number of tampered items
                     */
                    uint64_t m_tamperNum;
                    bool m_tamperNumHasBeenSet;

                    /**
                     * Today's protection count
                     */
                    uint64_t m_protectToday;
                    bool m_protectTodayHasBeenSet;

                    /**
                     * Number of protected hosts
                     */
                    uint64_t m_protectHostNum;
                    bool m_protectHostNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEGENERALIZERESPONSE_H_
