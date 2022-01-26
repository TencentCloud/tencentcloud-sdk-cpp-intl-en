/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPARETABLESINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPARETABLESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Compare the meta information of two tables
                */
                class CompareTablesInfo : public AbstractModel
                {
                public:
                    CompareTablesInfo();
                    ~CompareTablesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID of the source table
                     * @return SrcTableClusterId Cluster ID of the source table
                     */
                    std::string GetSrcTableClusterId() const;

                    /**
                     * 设置Cluster ID of the source table
                     * @param SrcTableClusterId Cluster ID of the source table
                     */
                    void SetSrcTableClusterId(const std::string& _srcTableClusterId);

                    /**
                     * 判断参数 SrcTableClusterId 是否已赋值
                     * @return SrcTableClusterId 是否已赋值
                     */
                    bool SrcTableClusterIdHasBeenSet() const;

                    /**
                     * 获取Table group ID of the source table
                     * @return SrcTableGroupId Table group ID of the source table
                     */
                    std::string GetSrcTableGroupId() const;

                    /**
                     * 设置Table group ID of the source table
                     * @param SrcTableGroupId Table group ID of the source table
                     */
                    void SetSrcTableGroupId(const std::string& _srcTableGroupId);

                    /**
                     * 判断参数 SrcTableGroupId 是否已赋值
                     * @return SrcTableGroupId 是否已赋值
                     */
                    bool SrcTableGroupIdHasBeenSet() const;

                    /**
                     * 获取Source table name
                     * @return SrcTableName Source table name
                     */
                    std::string GetSrcTableName() const;

                    /**
                     * 设置Source table name
                     * @param SrcTableName Source table name
                     */
                    void SetSrcTableName(const std::string& _srcTableName);

                    /**
                     * 判断参数 SrcTableName 是否已赋值
                     * @return SrcTableName 是否已赋值
                     */
                    bool SrcTableNameHasBeenSet() const;

                    /**
                     * 获取Cluster ID of the target table
                     * @return DstTableClusterId Cluster ID of the target table
                     */
                    std::string GetDstTableClusterId() const;

                    /**
                     * 设置Cluster ID of the target table
                     * @param DstTableClusterId Cluster ID of the target table
                     */
                    void SetDstTableClusterId(const std::string& _dstTableClusterId);

                    /**
                     * 判断参数 DstTableClusterId 是否已赋值
                     * @return DstTableClusterId 是否已赋值
                     */
                    bool DstTableClusterIdHasBeenSet() const;

                    /**
                     * 获取Table group ID of the target table
                     * @return DstTableGroupId Table group ID of the target table
                     */
                    std::string GetDstTableGroupId() const;

                    /**
                     * 设置Table group ID of the target table
                     * @param DstTableGroupId Table group ID of the target table
                     */
                    void SetDstTableGroupId(const std::string& _dstTableGroupId);

                    /**
                     * 判断参数 DstTableGroupId 是否已赋值
                     * @return DstTableGroupId 是否已赋值
                     */
                    bool DstTableGroupIdHasBeenSet() const;

                    /**
                     * 获取Target table name
                     * @return DstTableName Target table name
                     */
                    std::string GetDstTableName() const;

                    /**
                     * 设置Target table name
                     * @param DstTableName Target table name
                     */
                    void SetDstTableName(const std::string& _dstTableName);

                    /**
                     * 判断参数 DstTableName 是否已赋值
                     * @return DstTableName 是否已赋值
                     */
                    bool DstTableNameHasBeenSet() const;

                    /**
                     * 获取Source table ID
                     * @return SrcTableInstanceId Source table ID
                     */
                    std::string GetSrcTableInstanceId() const;

                    /**
                     * 设置Source table ID
                     * @param SrcTableInstanceId Source table ID
                     */
                    void SetSrcTableInstanceId(const std::string& _srcTableInstanceId);

                    /**
                     * 判断参数 SrcTableInstanceId 是否已赋值
                     * @return SrcTableInstanceId 是否已赋值
                     */
                    bool SrcTableInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target table ID
                     * @return DstTableInstanceId Target table ID
                     */
                    std::string GetDstTableInstanceId() const;

                    /**
                     * 设置Target table ID
                     * @param DstTableInstanceId Target table ID
                     */
                    void SetDstTableInstanceId(const std::string& _dstTableInstanceId);

                    /**
                     * 判断参数 DstTableInstanceId 是否已赋值
                     * @return DstTableInstanceId 是否已赋值
                     */
                    bool DstTableInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Cluster ID of the source table
                     */
                    std::string m_srcTableClusterId;
                    bool m_srcTableClusterIdHasBeenSet;

                    /**
                     * Table group ID of the source table
                     */
                    std::string m_srcTableGroupId;
                    bool m_srcTableGroupIdHasBeenSet;

                    /**
                     * Source table name
                     */
                    std::string m_srcTableName;
                    bool m_srcTableNameHasBeenSet;

                    /**
                     * Cluster ID of the target table
                     */
                    std::string m_dstTableClusterId;
                    bool m_dstTableClusterIdHasBeenSet;

                    /**
                     * Table group ID of the target table
                     */
                    std::string m_dstTableGroupId;
                    bool m_dstTableGroupIdHasBeenSet;

                    /**
                     * Target table name
                     */
                    std::string m_dstTableName;
                    bool m_dstTableNameHasBeenSet;

                    /**
                     * Source table ID
                     */
                    std::string m_srcTableInstanceId;
                    bool m_srcTableInstanceIdHasBeenSet;

                    /**
                     * Target table ID
                     */
                    std::string m_dstTableInstanceId;
                    bool m_dstTableInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_COMPARETABLESINFO_H_
