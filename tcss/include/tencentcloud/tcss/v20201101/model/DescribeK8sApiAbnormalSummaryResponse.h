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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALSUMMARYRESPONSE_H_

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
                * DescribeK8sApiAbnormalSummary response structure.
                */
                class DescribeK8sApiAbnormalSummaryResponse : public AbstractModel
                {
                public:
                    DescribeK8sApiAbnormalSummaryResponse();
                    ~DescribeK8sApiAbnormalSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of pending events
                     * @return UnhandleEventCount The number of pending events
                     * 
                     */
                    uint64_t GetUnhandleEventCount() const;

                    /**
                     * 判断参数 UnhandleEventCount 是否已赋值
                     * @return UnhandleEventCount 是否已赋值
                     * 
                     */
                    bool UnhandleEventCountHasBeenSet() const;

                    /**
                     * 获取The number of pending high-risk events
                     * @return UnhandleHighLevelEventCount The number of pending high-risk events
                     * 
                     */
                    uint64_t GetUnhandleHighLevelEventCount() const;

                    /**
                     * 判断参数 UnhandleHighLevelEventCount 是否已赋值
                     * @return UnhandleHighLevelEventCount 是否已赋值
                     * 
                     */
                    bool UnhandleHighLevelEventCountHasBeenSet() const;

                    /**
                     * 获取The number of pending medium-risk events
                     * @return UnhandleMediumLevelEventCount The number of pending medium-risk events
                     * 
                     */
                    uint64_t GetUnhandleMediumLevelEventCount() const;

                    /**
                     * 判断参数 UnhandleMediumLevelEventCount 是否已赋值
                     * @return UnhandleMediumLevelEventCount 是否已赋值
                     * 
                     */
                    bool UnhandleMediumLevelEventCountHasBeenSet() const;

                    /**
                     * 获取The number of pending low-risk events
                     * @return UnhandleLowLevelEventCount The number of pending low-risk events
                     * 
                     */
                    uint64_t GetUnhandleLowLevelEventCount() const;

                    /**
                     * 判断参数 UnhandleLowLevelEventCount 是否已赋值
                     * @return UnhandleLowLevelEventCount 是否已赋值
                     * 
                     */
                    bool UnhandleLowLevelEventCountHasBeenSet() const;

                    /**
                     * 获取The number of pending notice-level events
                     * @return UnhandleNoticeLevelEventCount The number of pending notice-level events
                     * 
                     */
                    uint64_t GetUnhandleNoticeLevelEventCount() const;

                    /**
                     * 判断参数 UnhandleNoticeLevelEventCount 是否已赋值
                     * @return UnhandleNoticeLevelEventCount 是否已赋值
                     * 
                     */
                    bool UnhandleNoticeLevelEventCountHasBeenSet() const;

                private:

                    /**
                     * The number of pending events
                     */
                    uint64_t m_unhandleEventCount;
                    bool m_unhandleEventCountHasBeenSet;

                    /**
                     * The number of pending high-risk events
                     */
                    uint64_t m_unhandleHighLevelEventCount;
                    bool m_unhandleHighLevelEventCountHasBeenSet;

                    /**
                     * The number of pending medium-risk events
                     */
                    uint64_t m_unhandleMediumLevelEventCount;
                    bool m_unhandleMediumLevelEventCountHasBeenSet;

                    /**
                     * The number of pending low-risk events
                     */
                    uint64_t m_unhandleLowLevelEventCount;
                    bool m_unhandleLowLevelEventCountHasBeenSet;

                    /**
                     * The number of pending notice-level events
                     */
                    uint64_t m_unhandleNoticeLevelEventCount;
                    bool m_unhandleNoticeLevelEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALSUMMARYRESPONSE_H_
