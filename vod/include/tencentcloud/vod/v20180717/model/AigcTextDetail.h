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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAIL_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcTextDetailData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC Text Detail
                */
                class AigcTextDetail : public AbstractModel
                {
                public:
                    AigcTextDetail();
                    ~AigcTextDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Entries per page</p>
                     * @return PageSize <p>Entries per page</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Entries per page</p>
                     * @param _pageSize <p>Entries per page</p>
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
                     * 获取<p>The scroll_token returned in response on the previous page is used to turn to the next page</p>
                     * @return ScrollToken <p>The scroll_token returned in response on the previous page is used to turn to the next page</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>The scroll_token returned in response on the previous page is used to turn to the next page</p>
                     * @param _scrollToken <p>The scroll_token returned in response on the previous page is used to turn to the next page</p>
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取<p>Raw data details</p>
                     * @return Data <p>Raw data details</p>
                     * 
                     */
                    std::vector<AigcTextDetailData> GetData() const;

                    /**
                     * 设置<p>Raw data details</p>
                     * @param _data <p>Raw data details</p>
                     * 
                     */
                    void SetData(const std::vector<AigcTextDetailData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Entries per page</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>The scroll_token returned in response on the previous page is used to turn to the next page</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>Raw data details</p>
                     */
                    std::vector<AigcTextDetailData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAIL_H_
