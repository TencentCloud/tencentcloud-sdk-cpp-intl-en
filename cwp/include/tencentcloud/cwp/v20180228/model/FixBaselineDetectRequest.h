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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FIXBASELINEDETECTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FIXBASELINEDETECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * FixBaselineDetect request structure.
                */
                class FixBaselineDetectRequest : public AbstractModel
                {
                public:
                    FixBaselineDetectRequest();
                    ~FixBaselineDetectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Host ID
                     * @return HostId Host ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置Host ID
                     * @param _hostId Host ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取Item ID
                     * @return ItemId Item ID
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置Item ID
                     * @param _itemId Item ID
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Repair content
                     * @return Data Repair content
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 设置Repair content
                     * @param _data Repair content
                     * 
                     */
                    void SetData(const std::vector<std::string>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Host ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Item ID
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Repair content
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FIXBASELINEDETECTREQUEST_H_
