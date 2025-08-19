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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENLISTVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENLISTVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/PageScreenVO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Screenshot list
                */
                class PageScreenListVO : public AbstractModel
                {
                public:
                    PageScreenListVO();
                    ~PageScreenListVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image export type. Valid values: Base64, and URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PicType Image export type. Valid values: Base64, and URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPicType() const;

                    /**
                     * 设置Image export type. Valid values: Base64, and URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _picType Image export type. Valid values: Base64, and URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPicType(const std::string& _picType);

                    /**
                     * 判断参数 PicType 是否已赋值
                     * @return PicType 是否已赋值
                     * 
                     */
                    bool PicTypeHasBeenSet() const;

                    /**
                     * 获取Image list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List Image list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PageScreenVO> GetList() const;

                    /**
                     * 设置Image list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _list Image list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<PageScreenVO>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Async transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranId Async transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置Async transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tranId Async transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取Transaction status.
1: processing; 2: processing successful; 3: processing failed (error content in outer Msg).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranStatus Transaction status.
1: processing; 2: processing successful; 3: processing failed (error content in outer Msg).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTranStatus() const;

                    /**
                     * 设置Transaction status.
1: processing; 2: processing successful; 3: processing failed (error content in outer Msg).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tranStatus Transaction status.
1: processing; 2: processing successful; 3: processing failed (error content in outer Msg).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranStatus(const int64_t& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     * 
                     */
                    bool TranStatusHasBeenSet() const;

                private:

                    /**
                     * Image export type. Valid values: Base64, and URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_picType;
                    bool m_picTypeHasBeenSet;

                    /**
                     * Image list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PageScreenVO> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Async transaction ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * Transaction status.
1: processing; 2: processing successful; 3: processing failed (error content in outer Msg).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PAGESCREENLISTVO_H_
