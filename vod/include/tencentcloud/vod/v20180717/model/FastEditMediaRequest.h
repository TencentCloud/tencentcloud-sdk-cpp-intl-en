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
                     * 获取Input media file information. Support for up to 100 media inputs.
                     * @return FileInfos Input media file information. Support for up to 100 media inputs.
                     * 
                     */
                    std::vector<FastEditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input media file information. Support for up to 100 media inputs.
                     * @param _fileInfos Input media file information. Support for up to 100 media inputs.
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
                     * 获取ClipMode is used to indicate whether to include this segment when the clipping time point falls in the middle of a TS segment. There are two values:<li>StartInclusiveEndInclusive: When the clip start time point and end time point fall in the middle of a segment, this segment will be included; </li> <li>StartInclusiveEndExclusive: When the starting time point falls in the middle of a segment, the segment will be included; when the end time point falls in the middle of a segment, the segment will not be included.</li> If not specified, the default is StartInclusiveEndInclusive.
                     * @return ClipMode ClipMode is used to indicate whether to include this segment when the clipping time point falls in the middle of a TS segment. There are two values:<li>StartInclusiveEndInclusive: When the clip start time point and end time point fall in the middle of a segment, this segment will be included; </li> <li>StartInclusiveEndExclusive: When the starting time point falls in the middle of a segment, the segment will be included; when the end time point falls in the middle of a segment, the segment will not be included.</li> If not specified, the default is StartInclusiveEndInclusive.
                     * 
                     */
                    std::string GetClipMode() const;

                    /**
                     * 设置ClipMode is used to indicate whether to include this segment when the clipping time point falls in the middle of a TS segment. There are two values:<li>StartInclusiveEndInclusive: When the clip start time point and end time point fall in the middle of a segment, this segment will be included; </li> <li>StartInclusiveEndExclusive: When the starting time point falls in the middle of a segment, the segment will be included; when the end time point falls in the middle of a segment, the segment will not be included.</li> If not specified, the default is StartInclusiveEndInclusive.
                     * @param _clipMode ClipMode is used to indicate whether to include this segment when the clipping time point falls in the middle of a TS segment. There are two values:<li>StartInclusiveEndInclusive: When the clip start time point and end time point fall in the middle of a segment, this segment will be included; </li> <li>StartInclusiveEndExclusive: When the starting time point falls in the middle of a segment, the segment will be included; when the end time point falls in the middle of a segment, the segment will not be included.</li> If not specified, the default is StartInclusiveEndInclusive.
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
                     * 获取<b> VOD [Application](/document/product/266/14574) ID. Customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether it is a default application or a newly created application), must fill in this field as the application ID. </b>
                     * @return SubAppId <b> VOD [Application](/document/product/266/14574) ID. Customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether it is a default application or a newly created application), must fill in this field as the application ID. </b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b> VOD [Application](/document/product/266/14574) ID. Customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether it is a default application or a newly created application), must fill in this field as the application ID. </b>
                     * @param _subAppId <b> VOD [Application](/document/product/266/14574) ID. Customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether it is a default application or a newly created application), must fill in this field as the application ID. </b>
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
                     * Input media file information. Support for up to 100 media inputs.
                     */
                    std::vector<FastEditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * ClipMode is used to indicate whether to include this segment when the clipping time point falls in the middle of a TS segment. There are two values:<li>StartInclusiveEndInclusive: When the clip start time point and end time point fall in the middle of a segment, this segment will be included; </li> <li>StartInclusiveEndExclusive: When the starting time point falls in the middle of a segment, the segment will be included; when the end time point falls in the middle of a segment, the segment will not be included.</li> If not specified, the default is StartInclusiveEndInclusive.
                     */
                    std::string m_clipMode;
                    bool m_clipModeHasBeenSet;

                    /**
                     * <b> VOD [Application](/document/product/266/14574) ID. Customers who activate VOD services from December 25, 2023, if they access resources in VOD applications (whether it is a default application or a newly created application), must fill in this field as the application ID. </b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIAREQUEST_H_
