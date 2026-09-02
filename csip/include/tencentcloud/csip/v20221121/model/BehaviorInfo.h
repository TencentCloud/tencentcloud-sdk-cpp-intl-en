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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BEHAVIORINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BEHAVIORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * User behavior - abnormal behavior detailed information
                */
                class BehaviorInfo : public AbstractModel
                {
                public:
                    BehaviorInfo();
                    ~BehaviorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return Date Date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param _date Date
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Specific data for rendering a curve
                     * @return NodeInfo Specific data for rendering a curve
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfo() const;

                    /**
                     * 设置Specific data for rendering a curve
                     * @param _nodeInfo Specific data for rendering a curve
                     * 
                     */
                    void SetNodeInfo(const std::vector<NodeInfo>& _nodeInfo);

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     * 
                     */
                    bool NodeInfoHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Specific data for rendering a curve
                     */
                    std::vector<NodeInfo> m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BEHAVIORINFO_H_
