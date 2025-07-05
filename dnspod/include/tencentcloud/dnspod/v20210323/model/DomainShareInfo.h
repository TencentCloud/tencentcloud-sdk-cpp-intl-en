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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Domain sharing information
                */
                class DomainShareInfo : public AbstractModel
                {
                public:
                    DomainShareInfo();
                    ~DomainShareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account with which the domain is shared
                     * @return ShareTo Account with which the domain is shared
                     * 
                     */
                    std::string GetShareTo() const;

                    /**
                     * 设置Account with which the domain is shared
                     * @param _shareTo Account with which the domain is shared
                     * 
                     */
                    void SetShareTo(const std::string& _shareTo);

                    /**
                     * 判断参数 ShareTo 是否已赋值
                     * @return ShareTo 是否已赋值
                     * 
                     */
                    bool ShareToHasBeenSet() const;

                    /**
                     * 获取Sharing mode. Valid values: `rw` (read/write), `r` (read-only).
                     * @return Mode Sharing mode. Valid values: `rw` (read/write), `r` (read-only).
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Sharing mode. Valid values: `rw` (read/write), `r` (read-only).
                     * @param _mode Sharing mode. Valid values: `rw` (read/write), `r` (read-only).
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Sharing status. Valid values: `enabled` (shared successfully); `pending` (the account shared to does not exist and is pending registration).
                     * @return Status Sharing status. Valid values: `enabled` (shared successfully); `pending` (the account shared to does not exist and is pending registration).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Sharing status. Valid values: `enabled` (shared successfully); `pending` (the account shared to does not exist and is pending registration).
                     * @param _status Sharing status. Valid values: `enabled` (shared successfully); `pending` (the account shared to does not exist and is pending registration).
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
                     * Account with which the domain is shared
                     */
                    std::string m_shareTo;
                    bool m_shareToHasBeenSet;

                    /**
                     * Sharing mode. Valid values: `rw` (read/write), `r` (read-only).
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Sharing status. Valid values: `enabled` (shared successfully); `pending` (the account shared to does not exist and is pending registration).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINSHAREINFO_H_
