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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeServerlessStrategy response structure.
                */
                class DescribeServerlessStrategyResponse : public AbstractModel
                {
                public:
                    DescribeServerlessStrategyResponse();
                    ~DescribeServerlessStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cpu load duration (seconds) at 0 before auto pause
                     * @return AutoPauseDelay cpu load duration (seconds) at 0 before auto pause
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取cpu load exceeds the current specification cores. How long (in seconds) does it last before auto-scaling is triggered?
                     * @return AutoScaleUpDelay cpu load exceeds the current specification cores. How long (in seconds) does it last before auto-scaling is triggered?
                     * 
                     */
                    int64_t GetAutoScaleUpDelay() const;

                    /**
                     * 判断参数 AutoScaleUpDelay 是否已赋值
                     * @return AutoScaleUpDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleUpDelayHasBeenSet() const;

                    /**
                     * 获取Duration (in seconds) of low cpu load before automatic scaling in is triggered when the load is lower than the core count of the next lower specification.
                     * @return AutoScaleDownDelay Duration (in seconds) of low cpu load before automatic scaling in is triggered when the load is lower than the core count of the next lower specification.
                     * 
                     */
                    int64_t GetAutoScaleDownDelay() const;

                    /**
                     * 判断参数 AutoScaleDownDelay 是否已赋值
                     * @return AutoScaleDownDelay 是否已赋值
                     * 
                     */
                    bool AutoScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取Whether to auto pause. Possible values:
yes
no
                     * @return AutoPause Whether to auto pause. Possible values:
yes
no
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取Whether the cluster is allowed to scale upward. Optional range: <li>yes</li><li>no</li>
                     * @return AutoScaleUp Whether the cluster is allowed to scale upward. Optional range: <li>yes</li><li>no</li>
                     * 
                     */
                    std::string GetAutoScaleUp() const;

                    /**
                     * 判断参数 AutoScaleUp 是否已赋值
                     * @return AutoScaleUp 是否已赋值
                     * 
                     */
                    bool AutoScaleUpHasBeenSet() const;

                    /**
                     * 获取Whether scale-in is allowed for the cluster. Optional range: <li>yes</li><li>no</li>
                     * @return AutoScaleDown Whether scale-in is allowed for the cluster. Optional range: <li>yes</li><li>no</li>
                     * 
                     */
                    std::string GetAutoScaleDown() const;

                    /**
                     * 判断参数 AutoScaleDown 是否已赋值
                     * @return AutoScaleDown 是否已赋值
                     * 
                     */
                    bool AutoScaleDownHasBeenSet() const;

                    /**
                     * 获取Whether archive is enabled. Optional range: <li>yes</li><li>no</li>. Default value: yes
                     * @return AutoArchive Whether archive is enabled. Optional range: <li>yes</li><li>no</li>. Default value: yes
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                private:

                    /**
                     * cpu load duration (seconds) at 0 before auto pause
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * cpu load exceeds the current specification cores. How long (in seconds) does it last before auto-scaling is triggered?
                     */
                    int64_t m_autoScaleUpDelay;
                    bool m_autoScaleUpDelayHasBeenSet;

                    /**
                     * Duration (in seconds) of low cpu load before automatic scaling in is triggered when the load is lower than the core count of the next lower specification.
                     */
                    int64_t m_autoScaleDownDelay;
                    bool m_autoScaleDownDelayHasBeenSet;

                    /**
                     * Whether to auto pause. Possible values:
yes
no
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * Whether the cluster is allowed to scale upward. Optional range: <li>yes</li><li>no</li>
                     */
                    std::string m_autoScaleUp;
                    bool m_autoScaleUpHasBeenSet;

                    /**
                     * Whether scale-in is allowed for the cluster. Optional range: <li>yes</li><li>no</li>
                     */
                    std::string m_autoScaleDown;
                    bool m_autoScaleDownHasBeenSet;

                    /**
                     * Whether archive is enabled. Optional range: <li>yes</li><li>no</li>. Default value: yes
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSSTRATEGYRESPONSE_H_
