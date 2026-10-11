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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Catalog.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * for retrieving the data catalog list
                */
                class ListCatalogsRsp : public AbstractModel
                {
                public:
                    ListCatalogsRsp();
                    ~ListCatalogsRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data catalog list
                     * @return Items Data catalog list
                     * 
                     */
                    std::vector<Catalog> GetItems() const;

                    /**
                     * 设置Data catalog list
                     * @param _items Data catalog list
                     * 
                     */
                    void SetItems(const std::vector<Catalog>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Next page pagination token
                     * @return NextPageToken Next page pagination token
                     * 
                     */
                    std::string GetNextPageToken() const;

                    /**
                     * 设置Next page pagination token
                     * @param _nextPageToken Next page pagination token
                     * 
                     */
                    void SetNextPageToken(const std::string& _nextPageToken);

                    /**
                     * 判断参数 NextPageToken 是否已赋值
                     * @return NextPageToken 是否已赋值
                     * 
                     */
                    bool NextPageTokenHasBeenSet() const;

                private:

                    /**
                     * Data catalog list
                     */
                    std::vector<Catalog> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Next page pagination token
                     */
                    std::string m_nextPageToken;
                    bool m_nextPageTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCATALOGSRSP_H_
