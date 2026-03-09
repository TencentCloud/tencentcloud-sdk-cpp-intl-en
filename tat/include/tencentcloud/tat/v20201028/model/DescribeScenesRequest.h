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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBESCENESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBESCENESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeScenes request structure.
                */
                class DescribeScenesRequest : public AbstractModel
                {
                public:
                    DescribeScenesRequest();
                    ~DescribeScenesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scene ID array.

The maximum per request is 100.

Parameters must not specify both `SceneIds` and `Filters` simultaneously.

                     * @return SceneIds Scene ID array.

The maximum per request is 100.

Parameters must not specify both `SceneIds` and `Filters` simultaneously.

                     * 
                     */
                    std::vector<std::string> GetSceneIds() const;

                    /**
                     * 设置Scene ID array.

The maximum per request is 100.

Parameters must not specify both `SceneIds` and `Filters` simultaneously.

                     * @param _sceneIds Scene ID array.

The maximum per request is 100.

Parameters must not specify both `SceneIds` and `Filters` simultaneously.

                     * 
                     */
                    void SetSceneIds(const std::vector<std::string>& _sceneIds);

                    /**
                     * 判断参数 SceneIds 是否已赋值
                     * @return SceneIds 是否已赋值
                     * 
                     */
                    bool SceneIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria

- scene-id - String - required: no - (filter condition) filter by the scene id.
-scene-name - String - required: no - (filtering conditions) filter by scenario name.
-created-by - String - required: no - (filter criteria) filter by scene creator, currently only support TAT, representing public scenarios.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `SceneIds` and `Filters` parameters cannot be specified at the same time.
                     * @return Filters Filter criteria

- scene-id - String - required: no - (filter condition) filter by the scene id.
-scene-name - String - required: no - (filtering conditions) filter by scenario name.
-created-by - String - required: no - (filter criteria) filter by scene creator, currently only support TAT, representing public scenarios.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `SceneIds` and `Filters` parameters cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria

- scene-id - String - required: no - (filter condition) filter by the scene id.
-scene-name - String - required: no - (filtering conditions) filter by scenario name.
-created-by - String - required: no - (filter criteria) filter by scene creator, currently only support TAT, representing public scenarios.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `SceneIds` and `Filters` parameters cannot be specified at the same time.
                     * @param _filters Filter criteria

- scene-id - String - required: no - (filter condition) filter by the scene id.
-scene-name - String - required: no - (filtering conditions) filter by scenario name.
-created-by - String - required: no - (filter criteria) filter by scene creator, currently only support TAT, representing public scenarios.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `SceneIds` and `Filters` parameters cannot be specified at the same time.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of returned results, defaults to 20 with a maximum value of 100. for further introduction about `Limit`, see relevant sections in the API [overview](https://www.tencentcloud.comom/document/API/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results, defaults to 20 with a maximum value of 100. for further introduction about `Limit`, see relevant sections in the API [overview](https://www.tencentcloud.comom/document/API/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results, defaults to 20 with a maximum value of 100. for further introduction about `Limit`, see relevant sections in the API [overview](https://www.tencentcloud.comom/document/API/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned results, defaults to 20 with a maximum value of 100. for further introduction about `Limit`, see relevant sections in the API [overview](https://www.tencentcloud.comom/document/API/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Scene ID array.

The maximum per request is 100.

Parameters must not specify both `SceneIds` and `Filters` simultaneously.

                     */
                    std::vector<std::string> m_sceneIds;
                    bool m_sceneIdsHasBeenSet;

                    /**
                     * Filter criteria

- scene-id - String - required: no - (filter condition) filter by the scene id.
-scene-name - String - required: no - (filtering conditions) filter by scenario name.
-created-by - String - required: no - (filter criteria) filter by scene creator, currently only support TAT, representing public scenarios.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `SceneIds` and `Filters` parameters cannot be specified at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results, defaults to 20 with a maximum value of 100. for further introduction about `Limit`, see relevant sections in the API [overview](https://www.tencentcloud.comom/document/API/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. The default value is `0`. For more information on `Offset`, see the relevant section in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBESCENESREQUEST_H_
