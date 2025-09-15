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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GROUPGLOBALCONFS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GROUPGLOBALCONFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AutoScaleResourceConf.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Global parameter information of all scaling groups in the cluster.
                */
                class GroupGlobalConfs : public AbstractModel
                {
                public:
                    GroupGlobalConfs();
                    ~GroupGlobalConfs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scaling group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupGlobalConf Scaling group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AutoScaleResourceConf GetGroupGlobalConf() const;

                    /**
                     * 设置Scaling group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupGlobalConf Scaling group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupGlobalConf(const AutoScaleResourceConf& _groupGlobalConf);

                    /**
                     * 判断参数 GroupGlobalConf 是否已赋值
                     * @return GroupGlobalConf 是否已赋值
                     * 
                     */
                    bool GroupGlobalConfHasBeenSet() const;

                    /**
                     * 获取Number of nodes scaled out in the current scaling group.
                     * @return CurrentNodes Number of nodes scaled out in the current scaling group.
                     * 
                     */
                    int64_t GetCurrentNodes() const;

                    /**
                     * 设置Number of nodes scaled out in the current scaling group.
                     * @param _currentNodes Number of nodes scaled out in the current scaling group.
                     * 
                     */
                    void SetCurrentNodes(const int64_t& _currentNodes);

                    /**
                     * 判断参数 CurrentNodes 是否已赋值
                     * @return CurrentNodes 是否已赋值
                     * 
                     */
                    bool CurrentNodesHasBeenSet() const;

                    /**
                     * 获取Number of postpaid nodes scaled out in the current scaling group.
                     * @return CurrentPostPaidNodes Number of postpaid nodes scaled out in the current scaling group.
                     * 
                     */
                    int64_t GetCurrentPostPaidNodes() const;

                    /**
                     * 设置Number of postpaid nodes scaled out in the current scaling group.
                     * @param _currentPostPaidNodes Number of postpaid nodes scaled out in the current scaling group.
                     * 
                     */
                    void SetCurrentPostPaidNodes(const int64_t& _currentPostPaidNodes);

                    /**
                     * 判断参数 CurrentPostPaidNodes 是否已赋值
                     * @return CurrentPostPaidNodes 是否已赋值
                     * 
                     */
                    bool CurrentPostPaidNodesHasBeenSet() const;

                    /**
                     * 获取Number of spot instance nodes scaled out in the current scaling group.
                     * @return CurrentSpotPaidNodes Number of spot instance nodes scaled out in the current scaling group.
                     * 
                     */
                    int64_t GetCurrentSpotPaidNodes() const;

                    /**
                     * 设置Number of spot instance nodes scaled out in the current scaling group.
                     * @param _currentSpotPaidNodes Number of spot instance nodes scaled out in the current scaling group.
                     * 
                     */
                    void SetCurrentSpotPaidNodes(const int64_t& _currentSpotPaidNodes);

                    /**
                     * 判断参数 CurrentSpotPaidNodes 是否已赋值
                     * @return CurrentSpotPaidNodes 是否已赋值
                     * 
                     */
                    bool CurrentSpotPaidNodesHasBeenSet() const;

                private:

                    /**
                     * Scaling group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AutoScaleResourceConf m_groupGlobalConf;
                    bool m_groupGlobalConfHasBeenSet;

                    /**
                     * Number of nodes scaled out in the current scaling group.
                     */
                    int64_t m_currentNodes;
                    bool m_currentNodesHasBeenSet;

                    /**
                     * Number of postpaid nodes scaled out in the current scaling group.
                     */
                    int64_t m_currentPostPaidNodes;
                    bool m_currentPostPaidNodesHasBeenSet;

                    /**
                     * Number of spot instance nodes scaled out in the current scaling group.
                     */
                    int64_t m_currentSpotPaidNodes;
                    bool m_currentSpotPaidNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GROUPGLOBALCONFS_H_
