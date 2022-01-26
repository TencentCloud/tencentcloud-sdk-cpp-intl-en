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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYLOGSETREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYLOGSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyLogset request structure.
                */
                class ModifyLogsetRequest : public AbstractModel
                {
                public:
                    ModifyLogsetRequest();
                    ~ModifyLogsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetId Logset ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Logset name
                     * @return LogsetName Logset name
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name
                     * @param LogsetName Logset name
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Tag key-value pair bound to logset. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key at any time.
                     * @return Tags Tag key-value pair bound to logset. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key at any time.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag key-value pair bound to logset. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key at any time.
                     * @param Tags Tag key-value pair bound to logset. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key at any time.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Logset name
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Tag key-value pair bound to logset. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key at any time.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYLOGSETREQUEST_H_
