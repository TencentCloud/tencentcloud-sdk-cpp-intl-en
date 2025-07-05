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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENT_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of TCB environment instance
                */
                class TCBEnvironment : public AbstractModel
                {
                public:
                    TCBEnvironment();
                    ~TCBEnvironment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID The unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置The unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD The unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取The source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Source The source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置The source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _source The source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name The name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The unique ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * The source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBENVIRONMENT_H_
