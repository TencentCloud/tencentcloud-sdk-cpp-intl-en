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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Department in the shared unit.
                */
                class ShareUnitNode : public AbstractModel
                {
                public:
                    ShareUnitNode();
                    ~ShareUnitNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Shared department ID.</p>.
                     * @return ShareNodeId <p>Shared department ID.</p>.
                     * 
                     */
                    int64_t GetShareNodeId() const;

                    /**
                     * 设置<p>Shared department ID.</p>.
                     * @param _shareNodeId <p>Shared department ID.</p>.
                     * 
                     */
                    void SetShareNodeId(const int64_t& _shareNodeId);

                    /**
                     * 判断参数 ShareNodeId 是否已赋值
                     * @return ShareNodeId 是否已赋值
                     * 
                     */
                    bool ShareNodeIdHasBeenSet() const;

                    /**
                     * 获取<P>Creation time.</p>.
                     * @return CreateTime <P>Creation time.</p>.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<P>Creation time.</p>.
                     * @param _createTime <P>Creation time.</p>.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Shared department ID.</p>.
                     */
                    int64_t m_shareNodeId;
                    bool m_shareNodeIdHasBeenSet;

                    /**
                     * <P>Creation time.</p>.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITNODE_H_
