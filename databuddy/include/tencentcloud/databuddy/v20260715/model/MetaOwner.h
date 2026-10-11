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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_METAOWNER_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_METAOWNER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Metadata responsible person information data structure
                */
                class MetaOwner : public AbstractModel
                {
                public:
                    MetaOwner();
                    ~MetaOwner() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metadata name (full name): catalog.schema.table
                     * @return FullName Metadata name (full name): catalog.schema.table
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置Metadata name (full name): catalog.schema.table
                     * @param _fullName Metadata name (full name): catalog.schema.table
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Owner type: User
                     * @return OwnerType Owner type: User
                     * 
                     */
                    std::string GetOwnerType() const;

                    /**
                     * 设置Owner type: User
                     * @param _ownerType Owner type: User
                     * 
                     */
                    void SetOwnerType(const std::string& _ownerType);

                    /**
                     * 判断参数 OwnerType 是否已赋值
                     * @return OwnerType 是否已赋值
                     * 
                     */
                    bool OwnerTypeHasBeenSet() const;

                    /**
                     * 获取Owner: Unique ID (uin)
                     * @return Owner Owner: Unique ID (uin)
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Owner: Unique ID (uin)
                     * @param _owner Owner: Unique ID (uin)
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Owner name.
                     * @return OwnerName Owner name.
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置Owner name.
                     * @param _ownerName Owner name.
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                private:

                    /**
                     * Metadata name (full name): catalog.schema.table
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Owner type: User
                     */
                    std::string m_ownerType;
                    bool m_ownerTypeHasBeenSet;

                    /**
                     * Owner: Unique ID (uin)
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Owner name.
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_METAOWNER_H_
