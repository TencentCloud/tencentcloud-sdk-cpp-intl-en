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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITTAGSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * EditTags request structure.
                */
                class EditTagsRequest : public AbstractModel
                {
                public:
                    EditTagsRequest();
                    ~EditTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag name
                     * @return Name Tag name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tag name
                     * @param _name Tag name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Tag ID
                     * @return Id Tag ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Tag ID
                     * @param _id Tag ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CVM instance ID
                     * @return Quuids CVM instance ID
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置CVM instance ID
                     * @param _quuids CVM instance ID
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * Tag name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CVM instance ID
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITTAGSREQUEST_H_
