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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSPGROUPREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateCfsPGroup request structure.
                */
                class CreateCfsPGroupRequest : public AbstractModel
                {
                public:
                    CreateCfsPGroupRequest();
                    ~CreateCfsPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission group name, which can contain 1–64 Chinese characters, letters, numbers, underscores, or dashes
                     * @return Name Permission group name, which can contain 1–64 Chinese characters, letters, numbers, underscores, or dashes
                     */
                    std::string GetName() const;

                    /**
                     * 设置Permission group name, which can contain 1–64 Chinese characters, letters, numbers, underscores, or dashes
                     * @param Name Permission group name, which can contain 1–64 Chinese characters, letters, numbers, underscores, or dashes
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Permission group description, which can contain 1–255 characters
                     * @return DescInfo Permission group description, which can contain 1–255 characters
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 设置Permission group description, which can contain 1–255 characters
                     * @param DescInfo Permission group description, which can contain 1–255 characters
                     */
                    void SetDescInfo(const std::string& _descInfo);

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     */
                    bool DescInfoHasBeenSet() const;

                private:

                    /**
                     * Permission group name, which can contain 1–64 Chinese characters, letters, numbers, underscores, or dashes
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Permission group description, which can contain 1–255 characters
                     */
                    std::string m_descInfo;
                    bool m_descInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSPGROUPREQUEST_H_
