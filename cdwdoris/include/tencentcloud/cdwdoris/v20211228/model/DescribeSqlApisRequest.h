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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeSqlApis request structure.
                */
                class DescribeSqlApisRequest : public AbstractModel
                {
                public:
                    DescribeSqlApisRequest();
                    ~DescribeSqlApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The IP address of the user link
                     * @return WhiteHost The IP address of the user link
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置The IP address of the user link
                     * @param _whiteHost The IP address of the user link
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                    /**
                     * 获取catalog name
                     * @return Catalog catalog name
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog name
                     * @param _catalog catalog name
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取Catalog collection
                     * @return Catalogs Catalog collection
                     * 
                     */
                    std::vector<std::string> GetCatalogs() const;

                    /**
                     * 设置Catalog collection
                     * @param _catalogs Catalog collection
                     * 
                     */
                    void SetCatalogs(const std::vector<std::string>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                private:

                    /**
                     * The IP address of the user link
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                    /**
                     * catalog name
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * Catalog collection
                     */
                    std::vector<std::string> m_catalogs;
                    bool m_catalogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBESQLAPISREQUEST_H_
