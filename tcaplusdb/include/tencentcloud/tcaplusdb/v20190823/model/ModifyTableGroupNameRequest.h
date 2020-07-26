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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEGROUPNAMEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEGROUPNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyTableGroupName request structure.
                */
                class ModifyTableGroupNameRequest : public AbstractModel
                {
                public:
                    ModifyTableGroupNameRequest();
                    ~ModifyTableGroupNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster where a table group resides
                     * @return ClusterId ID of the cluster where a table group resides
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster where a table group resides
                     * @param ClusterId ID of the cluster where a table group resides
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取ID of the table group to be renamed
                     * @return TableGroupId ID of the table group to be renamed
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置ID of the table group to be renamed
                     * @param TableGroupId ID of the table group to be renamed
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取New table group name, which can contain letters and symbols
                     * @return TableGroupName New table group name, which can contain letters and symbols
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置New table group name, which can contain letters and symbols
                     * @param TableGroupName New table group name, which can contain letters and symbols
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     */
                    bool TableGroupNameHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster where a table group resides
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ID of the table group to be renamed
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * New table group name, which can contain letters and symbols
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEGROUPNAMEREQUEST_H_
