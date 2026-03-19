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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_READONLYNODE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_READONLYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * RO node configuration for cloud disk edition.
                */
                class ReadonlyNode : public AbstractModel
                {
                public:
                    ReadonlyNode();
                    ~ReadonlyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether distributed in a random availability Zone. Import YES means random availability Zone. Otherwise used specified availability Zone.
                     * @return IsRandomZone Whether distributed in a random availability Zone. Import YES means random availability Zone. Otherwise used specified availability Zone.
                     * 
                     */
                    std::string GetIsRandomZone() const;

                    /**
                     * 设置Whether distributed in a random availability Zone. Import YES means random availability Zone. Otherwise used specified availability Zone.
                     * @param _isRandomZone Whether distributed in a random availability Zone. Import YES means random availability Zone. Otherwise used specified availability Zone.
                     * 
                     */
                    void SetIsRandomZone(const std::string& _isRandomZone);

                    /**
                     * 判断参数 IsRandomZone 是否已赋值
                     * @return IsRandomZone 是否已赋值
                     * 
                     */
                    bool IsRandomZoneHasBeenSet() const;

                    /**
                     * 获取Specify the availability zone for node distribution.
                     * @return Zone Specify the availability zone for node distribution.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Specify the availability zone for node distribution.
                     * @param _zone Specify the availability zone for node distribution.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取When upgrading a cloud disk edition instance, if you need to adjust the Availability Zone of Read-Only Nodes, you must specify the node ID.
                     * @return NodeId When upgrading a cloud disk edition instance, if you need to adjust the Availability Zone of Read-Only Nodes, you must specify the node ID.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置When upgrading a cloud disk edition instance, if you need to adjust the Availability Zone of Read-Only Nodes, you must specify the node ID.
                     * @param _nodeId When upgrading a cloud disk edition instance, if you need to adjust the Availability Zone of Read-Only Nodes, you must specify the node ID.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * Whether distributed in a random availability Zone. Import YES means random availability Zone. Otherwise used specified availability Zone.
                     */
                    std::string m_isRandomZone;
                    bool m_isRandomZoneHasBeenSet;

                    /**
                     * Specify the availability zone for node distribution.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * When upgrading a cloud disk edition instance, if you need to adjust the Availability Zone of Read-Only Nodes, you must specify the node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_READONLYNODE_H_
