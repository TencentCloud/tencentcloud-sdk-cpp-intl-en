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

#include <tencentcloud/ocr/v20181119/model/CoordsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CoordsItem::CoordsItem() :
    m_polygonHasBeenSet(false),
    m_coordsHasBeenSet(false)
{
}

CoreInternalOutcome CoordsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoordsItem.Polygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polygon.Deserialize(value["Polygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("Coords") && !value["Coords"].IsNull())
    {
        if (!value["Coords"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoordsItem.Coords` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coords.Deserialize(value["Coords"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoordsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_polygon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coords.ToJsonObject(value[key.c_str()], allocator);
    }

}


Polygon CoordsItem::GetPolygon() const
{
    return m_polygon;
}

void CoordsItem::SetPolygon(const Polygon& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool CoordsItem::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

ItemCoord CoordsItem::GetCoords() const
{
    return m_coords;
}

void CoordsItem::SetCoords(const ItemCoord& _coords)
{
    m_coords = _coords;
    m_coordsHasBeenSet = true;
}

bool CoordsItem::CoordsHasBeenSet() const
{
    return m_coordsHasBeenSet;
}

