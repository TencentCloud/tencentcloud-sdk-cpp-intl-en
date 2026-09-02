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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINETAG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Server tag information
                */
                class MachineTag : public AbstractModel
                {
                public:
                    MachineTag();
                    ~MachineTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Associated tag ID</p>
                     * @return Rid <p>Associated tag ID</p>
                     * 
                     */
                    int64_t GetRid() const;

                    /**
                     * 设置<p>Associated tag ID</p>
                     * @param _rid <p>Associated tag ID</p>
                     * 
                     */
                    void SetRid(const int64_t& _rid);

                    /**
                     * 判断参数 Rid 是否已赋值
                     * @return Rid 是否已赋值
                     * 
                     */
                    bool RidHasBeenSet() const;

                    /**
                     * 获取<p>Tag name</p>
                     * @return Name <p>Tag name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Tag name</p>
                     * @param _name <p>Tag name</p>
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
                     * 获取<p>Tag ID</p>
                     * @return TagId <p>Tag ID</p>
                     * 
                     */
                    uint64_t GetTagId() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _tagId <p>Tag ID</p>
                     * 
                     */
                    void SetTagId(const uint64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                private:

                    /**
                     * <p>Associated tag ID</p>
                     */
                    int64_t m_rid;
                    bool m_ridHasBeenSet;

                    /**
                     * <p>Tag name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tag ID</p>
                     */
                    uint64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINETAG_H_
