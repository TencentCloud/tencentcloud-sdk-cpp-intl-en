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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_VIOLATIONURL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_VIOLATIONURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Details of URLs in violation
                */
                class ViolationUrl : public AbstractModel
                {
                public:
                    ViolationUrl();
                    ~ViolationUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Origin access URL of the resource in violation
                     * @return RealUrl Origin access URL of the resource in violation
                     * 
                     */
                    std::string GetRealUrl() const;

                    /**
                     * 设置Origin access URL of the resource in violation
                     * @param _realUrl Origin access URL of the resource in violation
                     * 
                     */
                    void SetRealUrl(const std::string& _realUrl);

                    /**
                     * 判断参数 RealUrl 是否已赋值
                     * @return RealUrl 是否已赋值
                     * 
                     */
                    bool RealUrlHasBeenSet() const;

                    /**
                     * 获取Snapshot path. This is used to display a snapshot of the content in violation on the console.
                     * @return DownloadUrl Snapshot path. This is used to display a snapshot of the content in violation on the console.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置Snapshot path. This is used to display a snapshot of the content in violation on the console.
                     * @param _downloadUrl Snapshot path. This is used to display a snapshot of the content in violation on the console.
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取Current status of the resources in violation
`forbid`: Blocked
`release`: Unblocked
`delay`: Processing delayed
`reject`: Appeal dismissed. The status is still blocked.
`complain`: Appeal in process
                     * @return UrlStatus Current status of the resources in violation
`forbid`: Blocked
`release`: Unblocked
`delay`: Processing delayed
`reject`: Appeal dismissed. The status is still blocked.
`complain`: Appeal in process
                     * 
                     */
                    std::string GetUrlStatus() const;

                    /**
                     * 设置Current status of the resources in violation
`forbid`: Blocked
`release`: Unblocked
`delay`: Processing delayed
`reject`: Appeal dismissed. The status is still blocked.
`complain`: Appeal in process
                     * @param _urlStatus Current status of the resources in violation
`forbid`: Blocked
`release`: Unblocked
`delay`: Processing delayed
`reject`: Appeal dismissed. The status is still blocked.
`complain`: Appeal in process
                     * 
                     */
                    void SetUrlStatus(const std::string& _urlStatus);

                    /**
                     * 判断参数 UrlStatus 是否已赋值
                     * @return UrlStatus 是否已赋值
                     * 
                     */
                    bool UrlStatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Origin access URL of the resource in violation
                     */
                    std::string m_realUrl;
                    bool m_realUrlHasBeenSet;

                    /**
                     * Snapshot path. This is used to display a snapshot of the content in violation on the console.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Current status of the resources in violation
`forbid`: Blocked
`release`: Unblocked
`delay`: Processing delayed
`reject`: Appeal dismissed. The status is still blocked.
`complain`: Appeal in process
                     */
                    std::string m_urlStatus;
                    bool m_urlStatusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_VIOLATIONURL_H_
