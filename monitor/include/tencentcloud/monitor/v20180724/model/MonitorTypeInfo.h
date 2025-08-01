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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MONITORTYPEINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MONITORTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Monitoring type details
                */
                class MonitorTypeInfo : public AbstractModel
                {
                public:
                    MonitorTypeInfo();
                    ~MonitorTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Monitoring type ID
                     * @return Id Monitoring type ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Monitoring type ID
                     * @param _id Monitoring type ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Monitoring type
                     * @return Name Monitoring type
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Monitoring type
                     * @param _name Monitoring type
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
                     * 获取Sort order
                     * @return SortId Sort order
                     * 
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置Sort order
                     * @param _sortId Sort order
                     * 
                     */
                    void SetSortId(const int64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                private:

                    /**
                     * Monitoring type ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Monitoring type
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sort order
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MONITORTYPEINFO_H_
