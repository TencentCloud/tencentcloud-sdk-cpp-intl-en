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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_AVAILABLEZONEAFFINITYINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_AVAILABLEZONEAFFINITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 
                */
                class AvailableZoneAffinityInfo : public AbstractModel
                {
                public:
                    AvailableZoneAffinityInfo();
                    ~AvailableZoneAffinityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Enable 
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置
                     * @param _enable 
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExitRatio 
                     * 
                     */
                    uint64_t GetExitRatio() const;

                    /**
                     * 设置
                     * @param _exitRatio 
                     * 
                     */
                    void SetExitRatio(const uint64_t& _exitRatio);

                    /**
                     * 判断参数 ExitRatio 是否已赋值
                     * @return ExitRatio 是否已赋值
                     * 
                     */
                    bool ExitRatioHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReentryRatio 
                     * 
                     */
                    uint64_t GetReentryRatio() const;

                    /**
                     * 设置
                     * @param _reentryRatio 
                     * 
                     */
                    void SetReentryRatio(const uint64_t& _reentryRatio);

                    /**
                     * 判断参数 ReentryRatio 是否已赋值
                     * @return ReentryRatio 是否已赋值
                     * 
                     */
                    bool ReentryRatioHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_exitRatio;
                    bool m_exitRatioHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_reentryRatio;
                    bool m_reentryRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_AVAILABLEZONEAFFINITYINFO_H_
