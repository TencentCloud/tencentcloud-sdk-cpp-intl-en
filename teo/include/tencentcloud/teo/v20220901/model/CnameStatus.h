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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CNAME status
                */
                class CnameStatus : public AbstractModel
                {
                public:
                    CnameStatus();
                    ~CnameStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain name.
                     * @return RecordName The domain name.
                     * 
                     */
                    std::string GetRecordName() const;

                    /**
                     * 设置The domain name.
                     * @param _recordName The domain name.
                     * 
                     */
                    void SetRecordName(const std::string& _recordName);

                    /**
                     * 判断参数 RecordName 是否已赋值
                     * @return RecordName 是否已赋值
                     * 
                     */
                    bool RecordNameHasBeenSet() const;

                    /**
                     * 获取The CNAME address.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return Cname The CNAME address.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置The CNAME address.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _cname The CNAME address.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取The CNAME status. Values:
<li>`active`: Activated</li>
<li>`moved`: Not activated </li>
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return Status The CNAME status. Values:
<li>`active`: Activated</li>
<li>`moved`: Not activated </li>
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The CNAME status. Values:
<li>`active`: Activated</li>
<li>`moved`: Not activated </li>
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _status The CNAME status. Values:
<li>`active`: Activated</li>
<li>`moved`: Not activated </li>
Note: u200dThis field may return null, indicating that no valid values can be obtained.
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
                     * The domain name.
                     */
                    std::string m_recordName;
                    bool m_recordNameHasBeenSet;

                    /**
                     * The CNAME address.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * The CNAME status. Values:
<li>`active`: Activated</li>
<li>`moved`: Not activated </li>
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
