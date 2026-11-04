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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/NodeRun.h>
#include <tencentcloud/adp/v20260520/model/NodeRunContent.h>
#include <tencentcloud/adp/v20260520/model/NodeRunExecution.h>
#include <tencentcloud/adp/v20260520/model/NodeRunLog.h>
#include <tencentcloud/adp/v20260520/model/Statistic.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workflow node running details
                */
                class NodeRunDetail : public AbstractModel
                {
                public:
                    NodeRunDetail();
                    ~NodeRunDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Node running information</p>
                     * @return NodeRun <p>Node running information</p>
                     * 
                     */
                    NodeRun GetNodeRun() const;

                    /**
                     * 设置<p>Node running information</p>
                     * @param _nodeRun <p>Node running information</p>
                     * 
                     */
                    void SetNodeRun(const NodeRun& _nodeRun);

                    /**
                     * 判断参数 NodeRun 是否已赋值
                     * @return NodeRun 是否已赋值
                     * 
                     */
                    bool NodeRunHasBeenSet() const;

                    /**
                     * 获取<p>Node operation content.</p>
                     * @return NodeRunContent <p>Node operation content.</p>
                     * 
                     */
                    NodeRunContent GetNodeRunContent() const;

                    /**
                     * 设置<p>Node operation content.</p>
                     * @param _nodeRunContent <p>Node operation content.</p>
                     * 
                     */
                    void SetNodeRunContent(const NodeRunContent& _nodeRunContent);

                    /**
                     * 判断参数 NodeRunContent 是否已赋值
                     * @return NodeRunContent 是否已赋值
                     * 
                     */
                    bool NodeRunContentHasBeenSet() const;

                    /**
                     * 获取<p>Node operation process</p>
                     * @return NodeRunExecution <p>Node operation process</p>
                     * 
                     */
                    NodeRunExecution GetNodeRunExecution() const;

                    /**
                     * 设置<p>Node operation process</p>
                     * @param _nodeRunExecution <p>Node operation process</p>
                     * 
                     */
                    void SetNodeRunExecution(const NodeRunExecution& _nodeRunExecution);

                    /**
                     * 判断参数 NodeRunExecution 是否已赋值
                     * @return NodeRunExecution 是否已赋值
                     * 
                     */
                    bool NodeRunExecutionHasBeenSet() const;

                    /**
                     * 获取<p>Node operation logs</p>
                     * @return NodeRunLog <p>Node operation logs</p>
                     * 
                     */
                    NodeRunLog GetNodeRunLog() const;

                    /**
                     * 设置<p>Node operation logs</p>
                     * @param _nodeRunLog <p>Node operation logs</p>
                     * 
                     */
                    void SetNodeRunLog(const NodeRunLog& _nodeRunLog);

                    /**
                     * 判断参数 NodeRunLog 是否已赋值
                     * @return NodeRunLog 是否已赋值
                     * 
                     */
                    bool NodeRunLogHasBeenSet() const;

                    /**
                     * 获取<p>Statistical information.</p>
                     * @return StatisticList <p>Statistical information.</p>
                     * 
                     */
                    std::vector<Statistic> GetStatisticList() const;

                    /**
                     * 设置<p>Statistical information.</p>
                     * @param _statisticList <p>Statistical information.</p>
                     * 
                     */
                    void SetStatisticList(const std::vector<Statistic>& _statisticList);

                    /**
                     * 判断参数 StatisticList 是否已赋值
                     * @return StatisticList 是否已赋值
                     * 
                     */
                    bool StatisticListHasBeenSet() const;

                private:

                    /**
                     * <p>Node running information</p>
                     */
                    NodeRun m_nodeRun;
                    bool m_nodeRunHasBeenSet;

                    /**
                     * <p>Node operation content.</p>
                     */
                    NodeRunContent m_nodeRunContent;
                    bool m_nodeRunContentHasBeenSet;

                    /**
                     * <p>Node operation process</p>
                     */
                    NodeRunExecution m_nodeRunExecution;
                    bool m_nodeRunExecutionHasBeenSet;

                    /**
                     * <p>Node operation logs</p>
                     */
                    NodeRunLog m_nodeRunLog;
                    bool m_nodeRunLogHasBeenSet;

                    /**
                     * <p>Statistical information.</p>
                     */
                    std::vector<Statistic> m_statisticList;
                    bool m_statisticListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNDETAIL_H_
