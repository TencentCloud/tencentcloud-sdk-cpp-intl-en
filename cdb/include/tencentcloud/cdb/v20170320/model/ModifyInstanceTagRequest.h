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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCETAGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCETAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyInstanceTag request structure.
                */
                class ModifyInstanceTagRequest : public AbstractModel
                {
                public:
                    ModifyInstanceTagRequest();
                    ~ModifyInstanceTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Tag to be added or modified.
                     * @return ReplaceTags Tag to be added or modified.
                     * 
                     */
                    std::vector<TagInfo> GetReplaceTags() const;

                    /**
                     * 设置Tag to be added or modified.
                     * @param _replaceTags Tag to be added or modified.
                     * 
                     */
                    void SetReplaceTags(const std::vector<TagInfo>& _replaceTags);

                    /**
                     * 判断参数 ReplaceTags 是否已赋值
                     * @return ReplaceTags 是否已赋值
                     * 
                     */
                    bool ReplaceTagsHasBeenSet() const;

                    /**
                     * 获取Tag to be deleted.
                     * @return DeleteTags Tag to be deleted.
                     * 
                     */
                    std::vector<TagInfo> GetDeleteTags() const;

                    /**
                     * 设置Tag to be deleted.
                     * @param _deleteTags Tag to be deleted.
                     * 
                     */
                    void SetDeleteTags(const std::vector<TagInfo>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Tag to be added or modified.
                     */
                    std::vector<TagInfo> m_replaceTags;
                    bool m_replaceTagsHasBeenSet;

                    /**
                     * Tag to be deleted.
                     */
                    std::vector<TagInfo> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCETAGREQUEST_H_
