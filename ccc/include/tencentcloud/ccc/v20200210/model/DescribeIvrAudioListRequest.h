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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeIvrAudioList request structure.
                */
                class DescribeIvrAudioListRequest : public AbstractModel
                {
                public:
                    DescribeIvrAudioListRequest();
                    ~DescribeIvrAudioListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Page size, upper limit 50
                     * @return PageSize Page size, upper limit 50
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size, upper limit 50
                     * @param _pageSize Page size, upper limit 50
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number starting from 0.
                     * @return PageNumber Page number starting from 0.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number starting from 0.
                     * @param _pageNumber Page number starting from 0.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取File alias
                     * @return CustomFileName File alias
                     * 
                     */
                    std::vector<std::string> GetCustomFileName() const;

                    /**
                     * 设置File alias
                     * @param _customFileName File alias
                     * 
                     */
                    void SetCustomFileName(const std::vector<std::string>& _customFileName);

                    /**
                     * 判断参数 CustomFileName 是否已赋值
                     * @return CustomFileName 是否已赋值
                     * 
                     */
                    bool CustomFileNameHasBeenSet() const;

                    /**
                     * 获取Filename
                     * @return AudioFileName Filename
                     * 
                     */
                    std::vector<std::string> GetAudioFileName() const;

                    /**
                     * 设置Filename
                     * @param _audioFileName Filename
                     * 
                     */
                    void SetAudioFileName(const std::vector<std::string>& _audioFileName);

                    /**
                     * 判断参数 AudioFileName 是否已赋值
                     * @return AudioFileName 是否已赋值
                     * 
                     */
                    bool AudioFileNameHasBeenSet() const;

                    /**
                     * 获取File ID
                     * @return FileId File ID
                     * 
                     */
                    std::vector<uint64_t> GetFileId() const;

                    /**
                     * 设置File ID
                     * @param _fileId File ID
                     * 
                     */
                    void SetFileId(const std::vector<uint64_t>& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page size, upper limit 50
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number starting from 0.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * File alias
                     */
                    std::vector<std::string> m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * Filename
                     */
                    std::vector<std::string> m_audioFileName;
                    bool m_audioFileNameHasBeenSet;

                    /**
                     * File ID
                     */
                    std::vector<uint64_t> m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTREQUEST_H_
