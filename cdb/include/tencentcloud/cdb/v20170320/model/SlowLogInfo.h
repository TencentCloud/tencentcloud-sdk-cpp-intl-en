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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Slow log details
                */
                class SlowLogInfo : public AbstractModel
                {
                public:
                    SlowLogInfo();
                    ~SlowLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup filename
                     * @return Name Backup filename
                     */
                    std::string GetName() const;

                    /**
                     * 设置Backup filename
                     * @param Name Backup filename
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Backup file size in bytes
                     * @return Size Backup file size in bytes
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Backup file size in bytes
                     * @param Size Backup file size in bytes
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * @return Date Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     * @param Date Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Download address on the private network
                     * @return IntranetUrl Download address on the private network
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置Download address on the private network
                     * @param IntranetUrl Download address on the private network
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取Download address on the public network
                     * @return InternetUrl Download address on the public network
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置Download address on the public network
                     * @param InternetUrl Download address on the public network
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取Log type. Value range: slowlog (slow log)
                     * @return Type Log type. Value range: slowlog (slow log)
                     */
                    std::string GetType() const;

                    /**
                     * 设置Log type. Value range: slowlog (slow log)
                     * @param Type Log type. Value range: slowlog (slow log)
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Backup filename
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backup file size in bytes
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup snapshot time in the format of yyyy-MM-dd HH:mm:ss, such as 2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Download address on the private network
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * Download address on the public network
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * Log type. Value range: slowlog (slow log)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SLOWLOGINFO_H_
