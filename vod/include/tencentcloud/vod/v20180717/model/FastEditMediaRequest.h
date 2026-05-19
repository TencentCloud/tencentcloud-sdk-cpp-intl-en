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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FastEditMediaFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * FastEditMedia request structure.
                */
                class FastEditMediaRequest : public AbstractModel
                {
                public:
                    FastEditMediaRequest();
                    ~FastEditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Input media file information. Supports up to 100 incoming media.
                     * @return FileInfos Input media file information. Supports up to 100 incoming media.
                     * 
                     */
                    std::vector<FastEditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input media file information. Supports up to 100 incoming media.
                     * @param _fileInfos Input media file information. Supports up to 100 incoming media.
                     * 
                     */
                    void SetFileInfos(const std::vector<FastEditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取ClipMode indicates whether to include a shard when the editing time point falls in the middle of a TS segment. There are two parameter values: <li>StartInclusiveEndInclusive: When both the start time point and end time point fall in the middle of a shard, the shard will be included;</li> <li>StartInclusiveEndExclusive: When the start time point falls in the middle of a shard, the shard will be included; when the end time point falls in the middle of a shard, the shard will not be included.</li> Default value: StartInclusiveEndInclusive.
                     * @return ClipMode ClipMode indicates whether to include a shard when the editing time point falls in the middle of a TS segment. There are two parameter values: <li>StartInclusiveEndInclusive: When both the start time point and end time point fall in the middle of a shard, the shard will be included;</li> <li>StartInclusiveEndExclusive: When the start time point falls in the middle of a shard, the shard will be included; when the end time point falls in the middle of a shard, the shard will not be included.</li> Default value: StartInclusiveEndInclusive.
                     * 
                     */
                    std::string GetClipMode() const;

                    /**
                     * 设置ClipMode indicates whether to include a shard when the editing time point falls in the middle of a TS segment. There are two parameter values: <li>StartInclusiveEndInclusive: When both the start time point and end time point fall in the middle of a shard, the shard will be included;</li> <li>StartInclusiveEndExclusive: When the start time point falls in the middle of a shard, the shard will be included; when the end time point falls in the middle of a shard, the shard will not be included.</li> Default value: StartInclusiveEndInclusive.
                     * @param _clipMode ClipMode indicates whether to include a shard when the editing time point falls in the middle of a TS segment. There are two parameter values: <li>StartInclusiveEndInclusive: When both the start time point and end time point fall in the middle of a shard, the shard will be included;</li> <li>StartInclusiveEndExclusive: When the start time point falls in the middle of a shard, the shard will be included; when the end time point falls in the middle of a shard, the shard will not be included.</li> Default value: StartInclusiveEndInclusive.
                     * 
                     */
                    void SetClipMode(const std::string& _clipMode);

                    /**
                     * 判断参数 ClipMode 是否已赋值
                     * @return ClipMode 是否已赋值
                     * 
                     */
                    bool ClipModeHasBeenSet() const;

                    /**
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Input media file information. Supports up to 100 incoming media.
                     */
                    std::vector<FastEditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * ClipMode indicates whether to include a shard when the editing time point falls in the middle of a TS segment. There are two parameter values: <li>StartInclusiveEndInclusive: When both the start time point and end time point fall in the middle of a shard, the shard will be included;</li> <li>StartInclusiveEndExclusive: When the start time point falls in the middle of a shard, the shard will be included; when the end time point falls in the middle of a shard, the shard will not be included.</li> Default value: StartInclusiveEndInclusive.
                     */
                    std::string m_clipMode;
                    bool m_clipModeHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
