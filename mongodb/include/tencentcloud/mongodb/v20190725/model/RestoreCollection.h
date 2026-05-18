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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTORECOLLECTION_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTORECOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * collection to be rolled back
                */
                class RestoreCollection : public AbstractModel
                {
                public:
                    RestoreCollection();
                    ~RestoreCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original collection to be rolled back
                     * @return OldCollection Original collection to be rolled back
                     * 
                     */
                    std::string GetOldCollection() const;

                    /**
                     * 设置Original collection to be rolled back
                     * @param _oldCollection Original collection to be rolled back
                     * 
                     */
                    void SetOldCollection(const std::string& _oldCollection);

                    /**
                     * 判断参数 OldCollection 是否已赋值
                     * @return OldCollection 是否已赋值
                     * 
                     */
                    bool OldCollectionHasBeenSet() const;

                    /**
                     * 获取Rolled-back collection
                     * @return NewCollection Rolled-back collection
                     * 
                     */
                    std::string GetNewCollection() const;

                    /**
                     * 设置Rolled-back collection
                     * @param _newCollection Rolled-back collection
                     * 
                     */
                    void SetNewCollection(const std::string& _newCollection);

                    /**
                     * 判断参数 NewCollection 是否已赋值
                     * @return NewCollection 是否已赋值
                     * 
                     */
                    bool NewCollectionHasBeenSet() const;

                private:

                    /**
                     * Original collection to be rolled back
                     */
                    std::string m_oldCollection;
                    bool m_oldCollectionHasBeenSet;

                    /**
                     * Rolled-back collection
                     */
                    std::string m_newCollection;
                    bool m_newCollectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTORECOLLECTION_H_
