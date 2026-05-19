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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FileContent.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ListFiles response structure.
                */
                class ListFilesResponse : public AbstractModel
                {
                public:
                    ListFilesResponse();
                    ~ListFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the response entry is truncated.
                     * @return IsTruncated Whether the response entry is truncated.
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                    /**
                     * 获取This node will be returned only when the response entries are truncated (IsTruncated is true). Its value is the last object key in the current response entries. When follow-up entries are required, input the value of this node as the marker parameter in the next request.
                     * @return NextMarker This node will be returned only when the response entries are truncated (IsTruncated is true). Its value is the last object key in the current response entries. When follow-up entries are required, input the value of this node as the marker parameter in the next request.
                     * 
                     */
                    std::string GetNextMarker() const;

                    /**
                     * 判断参数 NextMarker 是否已赋值
                     * @return NextMarker 是否已赋值
                     * 
                     */
                    bool NextMarkerHasBeenSet() const;

                    /**
                     * 获取The same part between the prefix or the start (if not specified) and the first delimiter is defined as Common Prefix. The node may return only if the delimiter parameter is specified in the request.
                     * @return CommonPrefixes The same part between the prefix or the start (if not specified) and the first delimiter is defined as Common Prefix. The node may return only if the delimiter parameter is specified in the request.
                     * 
                     */
                    std::vector<std::string> GetCommonPrefixes() const;

                    /**
                     * 判断参数 CommonPrefixes 是否已赋值
                     * @return CommonPrefixes 是否已赋值
                     * 
                     */
                    bool CommonPrefixesHasBeenSet() const;

                    /**
                     * 获取Object entry.
                     * @return Contents Object entry.
                     * 
                     */
                    std::vector<FileContent> GetContents() const;

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                private:

                    /**
                     * Whether the response entry is truncated.
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                    /**
                     * This node will be returned only when the response entries are truncated (IsTruncated is true). Its value is the last object key in the current response entries. When follow-up entries are required, input the value of this node as the marker parameter in the next request.
                     */
                    std::string m_nextMarker;
                    bool m_nextMarkerHasBeenSet;

                    /**
                     * The same part between the prefix or the start (if not specified) and the first delimiter is defined as Common Prefix. The node may return only if the delimiter parameter is specified in the request.
                     */
                    std::vector<std::string> m_commonPrefixes;
                    bool m_commonPrefixesHasBeenSet;

                    /**
                     * Object entry.
                     */
                    std::vector<FileContent> m_contents;
                    bool m_contentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESRESPONSE_H_
