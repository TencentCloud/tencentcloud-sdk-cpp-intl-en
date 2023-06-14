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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CONFLICTSOURCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CONFLICTSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ConflictItem.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Conflict resource.
                */
                class ConflictSource : public AbstractModel
                {
                public:
                    ConflictSource();
                    ~ConflictSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Conflict resource ID
                     * @return ConflictSourceId Conflict resource ID
                     * 
                     */
                    std::string GetConflictSourceId() const;

                    /**
                     * 设置Conflict resource ID
                     * @param _conflictSourceId Conflict resource ID
                     * 
                     */
                    void SetConflictSourceId(const std::string& _conflictSourceId);

                    /**
                     * 判断参数 ConflictSourceId 是否已赋值
                     * @return ConflictSourceId 是否已赋值
                     * 
                     */
                    bool ConflictSourceIdHasBeenSet() const;

                    /**
                     * 获取Conflict resource
                     * @return SourceItem Conflict resource
                     * 
                     */
                    std::string GetSourceItem() const;

                    /**
                     * 设置Conflict resource
                     * @param _sourceItem Conflict resource
                     * 
                     */
                    void SetSourceItem(const std::string& _sourceItem);

                    /**
                     * 判断参数 SourceItem 是否已赋值
                     * @return SourceItem 是否已赋值
                     * 
                     */
                    bool SourceItemHasBeenSet() const;

                    /**
                     * 获取Conflict resource items
                     * @return ConflictItemSet Conflict resource items
                     * 
                     */
                    std::vector<ConflictItem> GetConflictItemSet() const;

                    /**
                     * 设置Conflict resource items
                     * @param _conflictItemSet Conflict resource items
                     * 
                     */
                    void SetConflictItemSet(const std::vector<ConflictItem>& _conflictItemSet);

                    /**
                     * 判断参数 ConflictItemSet 是否已赋值
                     * @return ConflictItemSet 是否已赋值
                     * 
                     */
                    bool ConflictItemSetHasBeenSet() const;

                private:

                    /**
                     * Conflict resource ID
                     */
                    std::string m_conflictSourceId;
                    bool m_conflictSourceIdHasBeenSet;

                    /**
                     * Conflict resource
                     */
                    std::string m_sourceItem;
                    bool m_sourceItemHasBeenSet;

                    /**
                     * Conflict resource items
                     */
                    std::vector<ConflictItem> m_conflictItemSet;
                    bool m_conflictItemSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CONFLICTSOURCE_H_
